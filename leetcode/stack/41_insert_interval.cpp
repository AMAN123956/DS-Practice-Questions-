class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       // if size is equal to 0  
        if(intervals.size() == 0){
           intervals.push_back(newInterval);
           return intervals;
       }   
       else{
           intervals.push_back(newInterval);
           sort(intervals.begin(),intervals.end());
           vector<vector<int>> ans = mergeIntervals(intervals);
           return ans;
       }
    
    }
    
   public:
     vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals){
               stack<int> st;
        stack<int> et;
        
        for(int i=0;i<intervals.size();i++){
            if(i==0){
                st.push(intervals[i][0]);
                et.push(intervals[i][1]);
            }
            else{
                int start = st.top();
                int end=et.top();
                if(intervals[i][0] > end){
                    st.push(intervals[i][0]);
                    et.push(intervals[i][1]);
                }
                else{
                    if(intervals[i][1]>end){
                        et.pop();
                        et.push(intervals[i][1]);
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        
        vector<vector<int>> ans;
        while(st.size()>0){
            cout<<st.top()<<""<<et.top()<<"\n";
            vector<int> res;
            res.push_back(st.top());
            res.push_back(et.top());
            ans.push_back(res);
            res.clear();
            st.pop();
            et.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
   }
};
