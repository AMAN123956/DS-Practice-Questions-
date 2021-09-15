// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i) return i;
        }
        return nums.size();
        
    }
};


// Other Approach
int sum=0;
int diff=0;
for(int i=0;i<nums.size();i++)
  sum+=nums[i];
diff=((nums.size()*(nums.size()+1))/2)-sum)
if(diff==0)
  return 0;
else return diff
