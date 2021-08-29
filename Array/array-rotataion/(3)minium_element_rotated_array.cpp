#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
 ll t;
 cin>>t;
 while(t--){
    ll n,flag=0,index=0;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    for(int i=0;i<n;i++){
        if(arr[i+1]<arr[i]){
            flag=1;
            index=i+1;
        }
    }
    if(flag==0) cout<<arr[0]<<"\n";
    else cout<<arr[index]<<"\n";
 }
 return 0;
 
}

// Complexity : O(n)
    
