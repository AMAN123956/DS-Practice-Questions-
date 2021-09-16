// Round 280 Div 2 Vanya and Lantens
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
  ll n,l;
  cin>>n>>l;
  double arr[n];
  double res=0;
  double diff=0;
  double ans=0;
  rep(i,0,n){
      cin>>arr[i];
  }
  sort(arr,arr+n);
  if(arr[0]!=0 && arr[n-1]==l){
      rep(i,0,n-1){
          diff=double(arr[i+1]-arr[i])/2;
          res=max(res,diff);
      }
      
      if(res>arr[0]) cout<<fixed<<setprecision(9)<<res;
      else cout<<fixed<<setprecision(9)<<arr[0];
  }
  else if(arr[n-1]!=l && arr[0]==0){
      rep(i,0,n-1){
          diff=double(arr[i+1]-arr[i])/2;
          res=max(res,diff);
      }
      if(res> (l-arr[n-1])) cout<<fixed<<setprecision(9)<<res;
      else cout<<fixed<<setprecision(9)<<l-arr[n-1];
  }
  else{
      rep(i,0,n-1){
          diff=double(arr[i+1]-arr[i])/2;
          res=max(res,diff);
      }
      if(arr[0]!=0 && arr[n-1]!=l){
          ans=max(arr[0],l-arr[n-1]);
          res=max(res,ans);
      }
      cout<<fixed<<setprecision(9)<<res;
  }
  return;
}
int main()
{
 solve();
  return 0;
}
