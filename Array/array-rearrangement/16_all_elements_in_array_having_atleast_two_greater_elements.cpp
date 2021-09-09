// Problem: https://www.geeksforgeeks.org/find-elements-array-least-two-greater-elements/
// Extension of 15 th
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
  int arr[n];
  rep(i,0,n) cin>>arr[i];
  int first,second;
  first=second=INT_MIN;
  rep(i,0,n){
      if(arr[i]>first){
          second=first;
          first=arr[i];
      }
      else if(arr[i]>second){
          second=arr[i];
      }
      
  }
  rep(i,0,n){
      if(arr[i]!=first && arr[i]!=second) cout<<arr[i]<<" ";
      else continue;
  }
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
