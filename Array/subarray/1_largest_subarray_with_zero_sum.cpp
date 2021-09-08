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
  int maxi=0,sum=0,start;
  unordered_map<int,int> mpp;
  rep(i,0,n){
    sum+=arr[i];
    if(sum==0) maxi=i+1;
    else {
        if(mpp.find(sum)!=mpp.end()){
           start=mpp[sum];
           if(maxi<(i-start)) maxi=i-start;
            else maxi=maxi;
        }
        else mpp.insert(make_pair(sum,i));
    }
  }
  cout<<maxi;
  return;
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)