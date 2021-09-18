class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long sum = 0;
        long mx=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                sum+=nums[i];
            }
            mx=max(mx,sum);
            if(nums[i]==0) sum=0;
        }
        return mx;
        
    }
};
