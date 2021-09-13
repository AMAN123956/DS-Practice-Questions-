// Problem: Maximum difference between two elements(a[i],a[j]) such that(j>i)
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
   ll n,res=0,sum=0;
   cin>>n;
   ll arr[n];
   rep(i,0,n){
       cin>>arr[i];
    }
    ll diff[n-1];
    rep(i,0,n-1){
        diff[i]=arr[i+1]-arr[i];
    }
    rep(i,0,n-1){
        sum+=diff[i];
        res=max(res,sum);
        if(sum<0) sum=0;
    }
    cout<<res;
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
// Space Complexity: O(n)
