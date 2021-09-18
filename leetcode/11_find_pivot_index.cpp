// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long left_sum=0;
        long right_sum=0;
        int index=0;
        for(int i=1;i<nums.size();i++){
            right_sum+=nums[i];
        }
        // initially considering 1st index as pivot
        while(index<nums.size()){
            if(left_sum==right_sum){
                return index;
            }
            else{
                left_sum+=nums[index];
                if(index<nums.size()-1)
                index+=1;
                else break;
                right_sum-=nums[index];
            }
        }
        return -1;
    }
};
