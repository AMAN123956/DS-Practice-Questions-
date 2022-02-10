class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0;
        int n=weights.size();
        int sum=0;
        for(int i=0;i<n;i++) sum+=weights[i];
        
        cout<<sum<<"\n";
        int ans=-1;
        int end=sum;
        
        int mid = (start)+(end-start)/2;
        
        while(start<=end){
            
           if(isPossible(weights,start,end,mid,days)){
               ans=mid;
               cout<<ans<<" ";
               end=mid-1;
           }    
            else{
                start=mid+1;
            }
            mid=(start)+(end-start)/2;
        }
        return ans;
    }

    
public: 
       bool isPossible(vector<int> weights,int start,int end,int mid,int days){
           int dayCount=1;
           int weightSum = 0;
           for(int i=0;i<weights.size();i++){
               if(weightSum + weights[i] <= mid){
                   weightSum+=weights[i];
               }
               else{
                   dayCount++;
                   if(dayCount > days || weights[i]  > mid) return false;
                   
                   weightSum = weights[i];
               }
           }
           return true;
           
       }
    
};
