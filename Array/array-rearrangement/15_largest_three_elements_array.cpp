// Problem: To find largest three elements in an Array
// Assumption: Array size always greater than 3

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
  int arr[n];
  rep(i,0,n) cin>>arr[i];
  int first,second,third;
  first=second=third=INT_MIN;
  rep(i,0,n){
      if(arr[i]>first){
          third=second;
          second=first;
          first=arr[i];
      }
      else if(arr[i]>second){
          third=second;
          second=arr[i];
      }
      else if(arr[i]>third) third=arr[i];
  }
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
