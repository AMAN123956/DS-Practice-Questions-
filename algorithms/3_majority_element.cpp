Problem Link: https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& A) {
    int mark = floor((A.size()) / 2);
    // cout<<mark;
   int ans=A[0];
   int count=1;
    
   for(int i=1;i<A.size();i++){
       if(ans==A[i]) count++;
       else if(ans!=A[i]) count--;
       
       if(count==0){
           ans=A[i];
           count=1;
       }
        
   }
        
    count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==ans) count++;
    }
    if(count>mark)
   return ans;
        else return -1;
    }
};
