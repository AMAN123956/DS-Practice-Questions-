class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int mx=INT_MIN;
        int size=arr.size();
        int exp_end=arr.size();
        int act_end=arr[size-1];
        int diff = act_end - exp_end;
        int ans=0;
        int count=0;
       if(k<arr[0]) return k;
        else{
            for(int i=0;i<size;i++){
                if(arr[i]<=k) k++;
                else break;
            }
            return k;
        }
    }
};
