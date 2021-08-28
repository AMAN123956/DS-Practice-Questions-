#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int l,int h,int k){
    int mid=0;
// cout<<l<<h<<k<<"\n";
   while(l<=h){
       mid=floor((l+h)/2);
    //  cout<<mid<<arr[mid];
       if(arr[mid]==k) {
        //   cout<<"here";
           return mid;
           break;
       }
       else if(arr[mid]<k){
          l=mid+1;
          continue;
          
       }
       else{
           h=mid-1;
           continue;
       }
   }
   
   return -1;
   
}
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++) cin>>arr[i];
 int k=0,sum,res=0,flag=0;
 int l=0,h=0;
 cin>>sum;
 int index=0;
 for(int i=0;i<n;i++){
     if(arr[i+1]<arr[i])
        {
         index=i+1;
         break;
        }
 }


for(int i=0;i<n;i++){
    
    k=sum-arr[i];
    if(k>=arr[0] && k<=arr[index-1])
        res=bsearch(arr,0,index-1,k);
    else
        res=bsearch(arr,index,n-1,k);
     
    if(res!=-1){
       if(arr[i]!=arr[res]){
            flag=1;
            cout<<arr[i]<<" "<<arr[res];
            break;
        } 
        
    }
}
flag==0?cout<<-1:cout<<" ";
 

 
}
    
// Complexity : O(nlogn)
// Best Case: O(n)