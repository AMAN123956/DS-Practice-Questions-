// First Index in an array using Recursion
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define rep(i, a, b) for (ll i=a; i<b; ++i)
typedef long long ll;
typedef vector<ll> vll;
// Array is in descending order
int bsearch(int arr[],int l,int h,int pivot){
    int mid=0;
// cout<<l<<h<<k<<"\n";

   while(l<=h){
       mid=l+(h-l)/2;
    //  cout<<mid<<arr[mid];
       if(arr[mid]==pivot) {
        //   cout<<"here";
           return mid;
           break;
       }
       else if(arr[mid]>pivot){
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
int firstIndex(int arr[],int idx,int data){
    if(idx==arr.length()) return -1;
    
    if(arr[idx]==data) return idx;               // 1
    else{
        int fiid = firstIndex(arr,idx+1,data);   // 2
        return fiid;                             // 3
    }
    
}
void solve(){
  int n,idx,data;
  int arr[n];
  cin>>n>>idx>>data;
  rep(i,0,n) cin>>arr[i];
  int ans = firstIndex(n,idx,data);
  cout<<ans;
  return;
}
int main()
{
 solve();
  return 0;
}

