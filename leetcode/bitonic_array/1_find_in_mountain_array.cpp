/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak = 0;
        int start=0;
        int end=mountainArr.length()-1;
         while(start<=end){
            int mid=(start)+(end-start)/2;
             int num = mountainArr.get(mid);
            if(mid-1>=0 && mid+1<=mountainArr.length()-1){
                if(num > mountainArr.get(mid+1) && num> mountainArr.get(mid-1)) {
                    peak=mid;
                    break;
                };
                
            }
            
            if(mountainArr.get(mid+1) > num ) start=mid+1;
            else if(mountainArr.get(mid-1) > num) end=mid-1;
            
        }
        int pos1=bSearch1(target,mountainArr,0,peak);
        int pos2=bSearch2(target,mountainArr,peak+1,mountainArr.length()-1);
        if(pos1 ==-1 && pos2==-1) return -1;
        else if(pos1==-1 && pos2>=0) return pos2;
        else if(pos1>=0 && pos2==-1) return pos1;
        else return min(pos1,pos2);
        return pos1;
    }
    
public:
    int bSearch1(int target,MountainArray &mountainArr,int start,int end){
        while(start<=end){
            int mid=(start)+(end-start)/2;
            int num=mountainArr.get(mid);
            if(num == target) return mid;
            else if(num>target) end=mid-1;
            else start=mid+1;
          }
        return -1;
    }
    
    int bSearch2(int target,MountainArray &mountainArr,int start,int end){
        while(start<=end){
            int mid=(start)+(end-start)/2;
            int num=mountainArr.get(mid);
            if(num == target) return mid;
            else if(num>target) start=mid+1;
            else end=mid-1;
          }
        return -1;
    }
};
