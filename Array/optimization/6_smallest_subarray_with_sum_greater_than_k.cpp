// Smallest subarray with sum greater than k
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
// Struct to return multiple values from function
struct Pair{
    int min;
    int max;
};

void solve(){
    int n,target,ans=INT_MAX,sum=0,j=0;
    cin>>n>>target;
    int arr[n];
    rep(i,0,n) cin>>arr[i];
    rep(i,0,n){
        sum+=arr[i];
        while(sum>=target){
           int size=i-j+1;
           ans=min(ans,size);
           sum-=arr[j];
            j++;
        }
    }
    
    if(ans!=INT_MAX) cout<<ans;
    else cout<<-1;
    
    return;
    
}
int main()
{
 ll t;
 cin>>t;
 while(t--)
 solve();
 
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
