// Given an unsorted integer array nums, return the smallest missing positive integer.
//  Input: nums = [1,2,0]
// Output: 3

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int n=nums.size();
        unordered_map<int,int> mp;
        int i,max=0;
        for(i=0; i<n; i++)
        {   if(nums[i]>0)
            mp[nums[i]]++;
         if(nums[i]>max)
             max=nums[i];
        }
        for(i=1; i<=max; i++)
          if(mp[i]==0)
               return i;
        
        return max+1;
    }
};
