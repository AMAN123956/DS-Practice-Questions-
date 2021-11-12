class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int> ans;
        stack<int> st;
        int size=nums.size();
        int nge[size+1];
        st.push(size-1);
        nge[size-1]=size;
        for(int i=size-2;i>=0;i--){
            while(st.size()>0 && nums[i]>nums[st.top()]){
                st.pop();
            }
            if(st.size()==0) nge[i]=size;
            else nge[i]=st.top();
            
            st.push(i);
        }
        
        for(int i=0;i<=size-k;i++){
            int j=i;
            while(nge[j] < i+k){
                j=nge[j];
            }
            ans.push_back(nums[j]);
            
        }
        return ans;
    }
};
