// Number of subsets with product less than or equal to k
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
    int n,k,prod=1,sprod=1,count=0;
    cin>>n>>k;
    int arr[n];
    rep(i,0,n) cin>>arr[i];
    
    rep(i,0,n){
        if(arr[i]<=k) count++;
    }
    
    rep(i,0,n){
        prod=arr[i];
        rep(j,i+1,n){
            sprod=arr[i]*arr[j];
            // cout<<sprod<<" "<<i<<" "<<j;
            // cout<<"\n";
            prod=prod*arr[j];
            if(prod<=k || sprod<=k) count++;
        }
    }
    cout<<count;
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

// Time Complexity: O(2^n)
// Space Complexity: O(1)
