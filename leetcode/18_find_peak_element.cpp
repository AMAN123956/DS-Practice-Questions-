class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size=nums.size();
        int j=0;
        if(nums.size()==1) return 0;
        else if(nums.size()==2){
            if(nums[0]>nums[1]) return 0;
            else return 1;
        }
        for(int i=0,j=2;j<nums.size();j++,i++){
            if(nums[i+1]>nums[j] && nums[i+1]>nums[i]){
                return i+1;
            }
            else continue;
        }
        if(nums[0]>nums[1]) return 0;
        else if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        else return 0;
    }
};
