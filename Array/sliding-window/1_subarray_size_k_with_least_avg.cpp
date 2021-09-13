// Problem: Subarray with least average
// Using Sliding Window Technique
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
   ll n,sum=0,k;
   float res=0;
   float avg=0.0;
   cin>>n>>k;
   ll arr[n];
   int start=0,end=0;
   rep(i,0,n){
       cin>>arr[i];
    }
    rep(i,0,k){
        sum+=arr[i];
    }
    avg=float(sum)/k;
    res=avg;
    start=0;
    end=k-1;
    
    for(int i=0,j=k;j<n;i++,j++){
        sum=sum-arr[i]+arr[j];
        avg=float(sum)/k;
        if(avg<res){
            res=avg;
            start=i+1;
            end=j;
        }
    }
    cout<<res;
    cout<<"\n"<<start<<end;
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
