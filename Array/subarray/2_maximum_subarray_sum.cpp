class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int res=INT_MIN;
        int cur= 0 ;
        for(int i=0; i <n ; i++){
            cur+=nums[i];
            res = max(res ,cur);
            if(cur<0)
                cur=0;
        }
        return res;
        
    }
};
