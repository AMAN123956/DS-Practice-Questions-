class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1) return false;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' ) 
                st.push('(');
            else if(s[i] == ')')
            {
                cout<<"it";
             if(st.size()!=0 && st.top() == '(')   
               st.pop();
             else 
             {cout<<"bye";
                 return false;
             }
            }
            else if(s[i] == '[') st.push('[');
            else if(s[i] == ']') 
            {
             if(st.size()!=0 && st.top() == '[')   
               st.pop();
             else 
                 return false;
            }
            else if(s[i] == '{') st.push('{');
            else if(s[i] == '}') {
                if(st.size()!=0 && st.top() == '{')
                st.pop();
                else return false;
            }
            else continue;
        }
        if(st.size()==0) return true;
        else  return false;
    }
};
