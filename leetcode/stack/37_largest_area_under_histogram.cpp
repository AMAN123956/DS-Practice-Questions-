class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int nsl[heights.size()];
        int nsr[heights.size()];
        
        nsl[0]=-1;
        stack<int> st1;
        st1.push(0);
        for(int i=1;i<heights.size();i++){
            while(st1.size()>0 && heights[i]<= heights[st1.top()]){
                st1.pop();
            }
            if(st1.size()==0) nsl[i]=-1;
            else{
               
                nsl[i]=st1.top();
            }
            st1.push(i);
        }
        
        stack<int> st2;
        st2.push(heights.size()-1);
        nsr[heights.size()-1]=heights.size();
        for(int i=heights.size()-2;i>=0;i--){
            while(st2.size()>0 && heights[i] <= heights[st2.top()]){
                st2.pop();
            }
            if(st2.size()==0) nsr[i]=heights.size();
            else{ if(i==5) cout<<st2.top();
                 nsr[i]=st2.top();}
            st2.push(i);
        }
        
        int res=INT_MIN;
        for(int i=0;i<heights.size();i++){
            res=res<heights[i]*(nsr[i]-nsl[i]-1)?heights[i]*(nsr[i]-nsl[i]-1):res;
            // cout<<heights[i]<<" "<<nsl[i]<<" "<<nsr[i]<<"\n";
        }
       
        return res;
    }
 
};
