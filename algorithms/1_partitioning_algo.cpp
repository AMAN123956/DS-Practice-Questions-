// Partitioning Algorithm

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Optimized Solution
        int i=0;
        int j=0;
        while(i<nums.size()){
            if(nums[i]%2!=0){
                i++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return nums;
       
    }
};


// Use Cases
// Quick Sort
// Odd Even 
// Sorting array by parity
// 0-1 separation
// 0 non zero separation
// greater than one one side and less than on another side
