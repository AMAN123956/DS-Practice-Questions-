class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> res;
        int size=mat.size()*mat[0].size();
        int one=max(r,c)/min(r,c);
        int count=0;
        if(c*r>size || c*r<size) return mat;
        else{
            vector<int> ans;
            for(int i=0;i<mat.size();i++){
               for(int j=0;j<(mat[0].size());j++){
                ans.push_back(mat[i][j]);
                if(ans.size()==c){
                // cout<<i;
                res.push_back(ans);
                ans.clear();
                }
                }
               
            }
            return res;
        }
        
    }
};
