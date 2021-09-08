// Problem: https://www.geeksforgeeks.org/rearrange-array-maximum-minimum-form/
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
  ll arr[n];
  rep(i,0,n) cin>>arr[i];
  int p=-1;
  // rearranging all negative numbers first
  rep(i,0,n){
      if(arr[i]<0){
          p++;
          swap(arr[p],arr[i]);
      }
  }
  int low=0;
  int end=p+1;
  while(low<end){
      swap(arr[low],arr[end]);
      low+=2;
      end+=1;
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
