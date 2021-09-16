// Last Index in an array using Recursion
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
int lastIndex(int arr[],int idx,int data){
    if(idx==arr.length()) return -1; // base class
    
    int liisa = lastIndex(arr,idx+1,data);
    if(liisa == -1){
        if(arr[idx]==data){
            return idx;
        }
        else{
            return -1;
        }
    }
    else{
        return liisa;
    }
 }
void solve(){
  int n,idx,data;
  int arr[n];
  cin>>n>>idx>>data;
  rep(i,0,n) cin>>arr[i];
  int ans = lastIndex(n,idx,data);
  cout<<ans;
  return;
}
int main()
{
 solve();
  return 0;
}
