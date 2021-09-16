// Problem: Find minimum difference between elements
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
void solve(){
  int n;
  cin>>n;
  int diff=INT_MAX;
  ll arr[n];
  rep(i,0,n) cin>>arr[i];
  sort(arr,arr+n);
  rep(i,0,n-1){
      if(arr[i+1]-arr[i] < diff){
          diff=arr[i+1]-arr[i];
      }
  }
  cout<<diff;
  return;
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(nlogn)
// Space Complexity: O(1)
