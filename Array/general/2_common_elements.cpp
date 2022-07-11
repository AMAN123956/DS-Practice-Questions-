https://practice.geeksforgeeks.org/problems/common-elements1132/1#

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int,int> mp1;
            unordered_map<int,int> mp2;
            for(int i=0;i<n2;i++){
                mp1[B[i]]++;
            }
            for(int i=0;i<n3;i++) mp2[C[i]]++;
            vector<int> res;
            for(int i=0;i<n1;i++){
                if(mp1[A[i]] > 0 && mp2[A[i]] > 0){
                    res.push_back(A[i]);
                    mp1[A[i]] = -1;
                    mp2[A[i]] = -1;
                }
            }
            return res;
        }

};
