// Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long i=0,j=0,res=0;
        int mn=INT_MAX;
        long long sum=0;
        long long size = nums.size();
        // cout<<size;
        while(j < size && i<size){
            sum += nums[j];
            // cout<<sum<<"\n";
            if(sum<target){
                j++;
               
            }
            else if(sum >= target){
                res=j-i+1;
                if(res < mn) mn=res;
                j++;
                sum-=nums[i++];
                
            }
           
        }
        return mn;
    }
};
