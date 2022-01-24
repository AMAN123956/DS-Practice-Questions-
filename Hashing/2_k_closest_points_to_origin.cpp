class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // max-heap
        priority_queue<pair<float,int>> q;
        float diff;
        vector<vector<int>>res;
        for(int i=0;i<points.size();i++){
            diff=sqrt(pow(points[i][0],2)+pow(points[i][1],2));
            q.push({diff,i});
        }
        while(q.size()>k){
            q.pop();
        }
        vector<int> v;
        int ansIndex=0;
        while(q.size()!=0){
            ansIndex=q.top().second;
            v.push_back(points[ansIndex][0]);
            v.push_back(points[ansIndex][1]);
            
            res.push_back(v);
            v.clear();
            q.pop();
        }
        
        return res;
        
    }
};
