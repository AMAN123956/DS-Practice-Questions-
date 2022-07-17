class Solution {
    private:
    bool isSubsequence(string s,string t){
        int j = 0;
        int m = s.length();
        int n = t.length();
        for(int i=0;i<m && j<n;i++){
            if(t[j] == s[i]) j++;
        }
        return (j==n);
    }
    
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,bool> mp;
        int count = 0;
        for(int i=0;i<words.size();i++){
            if(mp.find(words[i]) != mp.end()){
                if(mp[words[i]]) count++;
            }
            else{
                if(isSubsequence(s,words[i])){
                    mp[words[i]] = true;
                    count++;
                }
                else mp[words[i]] = false;
            }
        }
        return count;
    }
};
