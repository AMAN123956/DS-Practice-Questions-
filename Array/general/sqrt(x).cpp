class Solution {
public:
    int mySqrt(int x) {
        long i=1;
        while(i*i <= x){
            i++;
        }
        return i-1;
    }
};




// Use of Binary Search O(logn)
class Solution {
public:
    int mySqrt(int x) {
      if(x==1) return 1;
        else{
        int low = 1;
        int high=x;
        double mid=low+(high-low)/2;
        while(low<=high){
            mid=low+ceil((high-low)/2);
            cout<<mid<<"\n";
            if(mid*mid == x) return mid;
            else if(mid*mid > x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low-1;
        }
    }
};
