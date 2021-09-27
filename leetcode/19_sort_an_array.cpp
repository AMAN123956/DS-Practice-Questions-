class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count=0;
        int freq=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            // cout<<it->first;
            if(it->second==1)
            nums[count++]=it->first;
            else{
                freq=it->second;
                // cout<<freq<<it->first;
                while(freq!=0){
                     nums[count++]=it->first;
                    freq--;
                }
            }
        }
        return nums;
    }
};
