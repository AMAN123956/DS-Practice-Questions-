class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        vector<int> res;
        // sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--)
		{
			st.push(nums[i]);

		}

        for(int i=nums.size()-1;i>=0;i--){
            while(st.size()>0 && nums[i]>=st.top()){
                st.pop();
            }
            if(st.size()==0) ans.push_back(-1);
            else{
                ans.push_back(st.top());
            }
            
            st.push(nums[i]);
        }
      reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
