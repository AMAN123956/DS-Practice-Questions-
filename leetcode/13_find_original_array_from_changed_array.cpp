class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
        unordered_map<int,int> mp;
        int num=0;
        vector<int> vec;
        
        if(a.size() % 2 !=0){
            return vec;
        }
        else{
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        
      
        for(int i=0;i<a.size();i++){
            num=a[i]*2;
            // cout<<mp[0];
            if(a[i]==0){
                if(mp[num]>=2 && mp[a[i]]){
                    mp[num]--;
                    mp[num]--;
                    vec.push_back(a[i]);
                }
            }
            else if(mp[num] && mp[a[i]] ){
                vec.push_back(a[i]);
                mp[num]--;
                mp[a[i]]--;
                
            }
        }
        if(vec.size()== a.size()/2)
        return vec;
        else{
            vec.clear();
            return vec;
        }
        }
    }
};
