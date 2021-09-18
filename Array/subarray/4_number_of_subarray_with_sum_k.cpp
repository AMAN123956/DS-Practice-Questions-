class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hmap;
        int curr_sum=0,count=0;
        hmap[0]++;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            
            if(hmap[curr_sum-k]){
                // cout<<i<<"a";
                count+=hmap[curr_sum-k];
               }
             hmap[curr_sum]++;
            
             
            
        }
        return count;
    }
};
