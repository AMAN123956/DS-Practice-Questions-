class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.length();
        int tl = t.length();
        if(sl!=tl) return false;
        else{
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i=0;i<tl;i++){
                if(s[i]!=t[i]) return false;
            }
            return true;
        }
    }
};


Time Complexity: O(nlogn)
