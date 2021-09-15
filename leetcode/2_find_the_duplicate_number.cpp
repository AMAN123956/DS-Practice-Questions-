// Example
// Input: nums = [1,3,4,2,2]
// Output: 2
// There is only one repeated number in nums, return this repeated number
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        long long index=0;
        for(int i=0;i<nums.size();i++){
            index=abs(nums[i])-1;
            if(nums[index]>=0){
                nums[index]=nums[index]*-1;
                // cout<<nums[index]<<"\n";
            }
            else return index+1;
           }
        
        return -1;
    }
};
