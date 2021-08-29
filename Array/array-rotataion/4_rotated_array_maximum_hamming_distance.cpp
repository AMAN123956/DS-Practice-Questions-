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
int find_hamming_distance(ll temp[],ll t[],ll n ){
    int count=0;
    for(int i=0;i<n;i++){
        if(temp[i]!=t[i]) count++;
    }
    return count;
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
    ll temp[2*n];
    for(int i=0;i<n;i++){
        temp[i]=temp[n+i] = arr[i];
    }
    ll t[n];
    int start=0,end=0,res=0,ans=0;
    for(int i=1;i<=n;i++){
        // t[n]={0};
        start=i%n;
        end=start+n;
        for(int j=start;j<end;j++){
           t[j-1]=temp[j];
        }
        res=find_hamming_distance(arr,t,n);
        ans=max(ans,res);
        
    }
    cout<<ans;
    cout<<"\n";
 }
 return 0;
 
}

// Complexity : O(n^2)
    
