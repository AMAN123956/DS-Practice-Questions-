// Problem Link: https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<int,vector<int>,greater<int>> q;
        
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            q.push(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            q.push(nums2[i]);
        }
        
        int totalSize=nums1.size()+nums2.size();
        float ans=0;
        if(totalSize % 2 == 0 ){
            int median1=totalSize/2;
            int median2 = median1+1;
            int count = 0;
            while(count!= (median2-1)){
                if(count == (median1-1))
                    ans=q.top();
                q.pop();
                count++;
                
            }
            ans+=q.top();
            return float(ans)/2;
            
        }
        else{
            
            int median1=(totalSize+1)/2;
            cout<<median1;
            int count = 0;
            while(count!= (median1-1)){
                q.pop();
                count++;
                
            }
            ans=q.top();
            return float(ans);
        }
 }
};
