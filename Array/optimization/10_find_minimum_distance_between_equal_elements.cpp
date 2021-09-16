// Problem: Find minimum distance between any two equal elements
// Problem Link : https://www.geeksforgeeks.org/minimum-distance-between-any-two-equal-elements-in-an-array/?ref=rp
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
  unordered_map<int,vector<int>> mp;
  ll arr[n];
  rep(i,0,n) cin>>arr[i];
  int ans=INT_MAX;
  int len=0;
  rep(i,0,n){
      mp[arr[i]].push_back(i);
  }
  for(auto itr=mp.begin();itr!=mp.end();itr++){
      int freq=itr->second.size();
      
      if(freq>=2){
          len=itr->second[1]-itr->second[0];
          ans=min(ans,len);
      }
  }
  cout<<ans;
  return;
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
