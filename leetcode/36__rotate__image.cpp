class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     // 1. Transpose of n*n matrix
        transpose(matrix);
     // 2. Reverse elements of each row of the matirx
        reverseRow(matrix);
    }
 
 public:
    void transpose(vector<vector<int>>& matrix){
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

 public:
    void reverseRow(vector<vector<int>>& matrix){
        for(int i=0;i<matrix.size();i++){
            int li=0;
            int hi=matrix[i].size()-1;
            while(li<hi){
                swap(matrix[i][li],matrix[i][hi]);
                li++;
                hi--;
            }
        }
    }
};
