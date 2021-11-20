class Solution {
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<int> ds;
      vector<vector<int>> ans;
      int freq[nums.size()];
      recurePermute(nums,ds,ans,freq);
        return ans;
    }
    
 public:
    void recurePermute(vector<int> nums,vector<int> ds,vector<vector<int>>& ans,int freq[]){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(freq[i]!=1){
                    freq[i]=1;
                    ds.push_back(nums[i]);
                    recurePermute(nums,ds,ans,freq);
                    ds.erase(ds.end()-1);
                    freq[i]=0;
                }
            }
        }
    }

    
};
