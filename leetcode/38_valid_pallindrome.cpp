class Solution {
public:
    bool validPalindrome(string s) {
        string rev=s;
        int count=0;
        string temp=s;
        reverse(rev.begin(),rev.end());
        if(s==rev) return true;
        else{
            for(int i=0;i<s.length()/2;i++){
                if(s[i]!=s[s.length()-i-1]){
                    s.erase(i,1);
                    string ans=s;
                    reverse(s.begin(),s.end());
                    if(s==ans) return true;
                    else {
                        temp.erase(temp.length()-i-1,1);
                        string ans=temp;
                        reverse(temp.begin(),temp.end());
                        if(ans==temp) return true;
                        else return false;
                    }
                }
                
               
            }
            return true;
        }
        
    }
};
