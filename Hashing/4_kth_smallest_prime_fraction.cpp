class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
       priority_queue<pair<float,pair<int,int>>> q;
        float res=0.0;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                res=float(float(arr[i])/arr[j]);
                // cout<<res;
                q.push({res,{arr[i],arr[j]}});
                if(q.size()>k) q.pop();
            }
        }
        vector<int> ans;
        ans.push_back(q.top().second.first);
        ans.push_back(q.top().second.second);
        return ans;
    }
};
