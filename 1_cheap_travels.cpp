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
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll quot=0,rem=0,cost=0;
    if(float(b)/m <= a){
        quot=n/m;
        rem=n%m;
        cost=quot*b;
        if(rem!=0){
            cost+=min(rem*a,b);
        }
        cout<<cost<<"\n";
    }
    else{
        cost=n*a;
        cout<<cost<<"\n";
    }
    return;
    
}
int main()
{
 solve();
 
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
