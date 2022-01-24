class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        vector<int> res;
        while(q.size()!=0){
            res.push_back(q.top());
            q.pop();
        }
        return res;
    }
};
