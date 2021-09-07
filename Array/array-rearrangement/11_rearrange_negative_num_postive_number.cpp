// Problem: https://www.geeksforgeeks.org/move-ve-elements-end-order-extra-space-allowed/
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
  ll n;
  cin>>n;
  int j=0;
  ll arr[n];
  int start=0;
  int end=n-1;
  rep(i,0,n) cin>>arr[i];
  while(start<=end){
      if(arr[start]<0 && arr[end]<0) start++;
      else if(arr[start]>0 && arr[end]<0){
          swap(arr[start],arr[end]);
          start++;
          end--;
      }
      else if(arr[start]>0 && arr[end]>0) end-=1;
      else{
          start+=1;
          end-=1;
      }
  }
  rep(i,0,n) cout<<arr[i]<<" ";
  return;
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
