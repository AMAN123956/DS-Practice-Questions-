class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.length();
        int tl = t.length();
        if(sl!=tl) return false;
        else{
            unordered_map<char,int> ms;
            unordered_map<char,int> mt;
          for(int i=0;i<sl;i++){
              ms[s[i]]++;
              mt[t[i]]++;
          }
            
            for(int i=0;i<tl;i++){
                if(ms[t[i]]!=mt[t[i]]) return false;
            }
            return true;
        
        }
    }
};


Time Complexity: O(n)
