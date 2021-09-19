class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int> mp;
        int num1=0;
        int index2=0,index1=0;
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
            if(arr[i]>=0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        sort(pos.begin(),pos.end());
        sort(neg.rbegin(),neg.rend());
        for(int i=0;i<pos.size();i++){
            if(pos[i]>0){
            num1=2*pos[i];
            if(mp[num1] && mp[pos[i]]){
                mp[num1]--;
                mp[pos[i]]--;
            }
            else if(mp[pos[i]]==0) continue;
            else return false;
            }
            else if(pos[i]==0){
                num1=2*pos[i];
                if(mp[num1]>=2 && mp[pos[i]]){
                    mp[num1]--;
                    mp[pos[i]]--;
                }
                else if(mp[pos[i]]==0) continue;
                else return false;
            }
           
            
        }
        // Negative
        // cout<<neg[0]<<neg[1];
        for(int i=0;i<neg.size();i++){
           num1=2*neg[i];
                if(mp[num1] && mp[neg[i]]){
                    mp[num1]--;
                    mp[neg[i]]--;
                }
                else if(mp[neg[i]]==0) continue;
                else return false;
        }
        return true;
    }
};
