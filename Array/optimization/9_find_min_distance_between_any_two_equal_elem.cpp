// Problem: Find minimum distance between any two equal elements
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
  vector<int> vec;
  ll arr[n];
  rep(i,0,n) cin>>arr[i];
  rep(i,0,n-1){
      rep(j,i+1,n){
          if(arr[i]==arr[j]){
              vec.push_back(j-i);
          }
      }
  }
  
  sort(vec.begin(),vec.end());
  cout<<vec[0];
  return;
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(nlogn)
// Space Complexity: O(1)
