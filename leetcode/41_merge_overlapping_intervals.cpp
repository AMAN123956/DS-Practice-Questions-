// Array Approach 
// Merge Overlapping Intervals

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size()-1;i++){
            if(intervals[i][1] >= intervals[i+1][0]){
                intervals[i+1] = {min(intervals[i][0],intervals[i+1][0]),max(intervals[i+1][1],intervals[i][1])};
                intervals[i]={-100,-100};
            }
        }
        
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0] == -100 && intervals[i][1] == -100) continue;
            else res.push_back({intervals[i][0],intervals[i][1]});
        }
        return res;
    }
};


Time Complexity : O(nlogn);
Space Complexity : O(n);
