class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int rem=0;
        int count=0;
        unordered_map<int,int> mp;
        mp[0]++;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            rem=sum%k;
            if(rem<0) rem+=k;
            
            if(mp[rem]){
                count+=mp[rem];
                mp[rem]++;
            }
            else{
                mp[rem]++;
            }
        }
        return count;
    }
};
