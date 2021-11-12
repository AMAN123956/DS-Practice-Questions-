 vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       // stack to store index
       stack<int> st;
       vector<int> ans;
       st.push(0);
       ans.push_back(1);
       for(int i=1;i<n;i++){
           while(st.size() > 0 && price[i] >=price[st.top()]){
               st.pop();
           }
           if(st.size()==0) ans.push_back(i+1);
           else ans.push_back(i-st.top());
           
           st.push(i);
       }
       return ans;
    }
