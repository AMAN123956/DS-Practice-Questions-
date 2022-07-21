class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        unordered_map<char,int>mp,temp;
        string s="";
        for(char i='a';i<='z';i++)mp[i]=INT_MAX;
        for(auto word:words){
            for(auto letter:word)temp[letter]++;
            for(char i='a';i<='z';i++)mp[i]=min(mp[i],temp[i]);
            temp.clear();
        }
        for(auto i:mp){
            int n=i.second;
            while(n--){
                s+=i.first;
                ans.push_back(s);
                s="";
            }
        }
        return ans;
    }
};
