// Minimum MAximum Difference Between Two Heights
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
    int n,prev=-1,x,y,ans=INT_MAX,res=0;
    cin>>n;
    int arr[n];
    rep(i,0,n) cin>>arr[i];
    cin>>x>>y;
    rep(i,0,n){
        if(arr[i]==x || arr[i]==y) {
            prev=i;
            break;
        }
        
    }
    
    rep(i,prev+1,n){
        if(arr[i]==x || arr[i]==y){
            if(arr[i]!=arr[prev] && prev!=-1){
                res=i-prev;
                ans=min(ans,res);
                prev=i;
            }
            else{
                prev=i;
            }
        }
    }
    if(ans==INT_MAX) {
        cout<<-1;
        return;
    }
    cout<<ans;
    
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
