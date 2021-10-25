class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Optimized Solution
        int p=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                p++;
                swap(nums[p],nums[i]);
            }
         }
        return nums;
       
    }
};
