// Problem: https://www.geeksforgeeks.org/count-frequencies-elements-array-o1-extra-space-time/?ref=rp
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
  unordered_map<int,int> mp;
  rep(i,0,n) cin>>arr[i];
  rep(i,0,n){
      mp[arr[i]]++;
    //   cout<<arr[i]<<" "<<hmap[arr[i]-1]<<"\n";
  }
  for(int i=0;i<n;i++){
      if(mp[arr[i]]!=-1){
          cout<<arr[i]<<" "<<mp[arr[i]]<<"\n";
          mp[arr[i]]=-1;
      }
  }
  return;
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
