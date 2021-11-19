// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int mid=0;
       int low=1;
        int res=-1;
        int high=n;
        while(low<=high){
            mid=low+(high-low)/2;
            if(isBadVersion(mid)){
                high=mid-1;
                res=mid;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};
