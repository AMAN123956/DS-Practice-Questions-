class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int size = nums.size();
        // size is equal to 2
        if(nums.size()<=2){
            return nums;
        }
        else{
            unordered_map<int,int> hmap;
            vector<int> res;
            for(int i=0;i<nums.size();i++){
                hmap[nums[i]]+=1;
            }
            
            for(int i=0;i<nums.size();i++){
                if(hmap[nums[i]]==1){
                    res.push_back(nums[i]);
                }
                else continue;
            }
            return res;
        }
    }
};
