// Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        int j = nums.size()-2;
        if(nums.size()==1) return;
        if(nums.size()==2){
            swap(nums[0],nums[1]);
            return;
        }
        while(j>=0){
            if(nums[i]>nums[j]){
                break;
            }
            i--;
            j--;
            
        }
        if(j < 0){
            sort(nums.begin(),nums.end());     
        }
        else{
            int k;
            for(k=nums.size()-1;k>j;k--){
                if(nums[k] > nums[j]) break;
            }
            swap(nums[k], nums[j]);
    	    reverse(nums.begin() + j + 1, nums.end());
        }
       
    }
};

