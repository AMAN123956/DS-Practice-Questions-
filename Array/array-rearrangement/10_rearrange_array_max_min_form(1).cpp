// Problem: https://www.geeksforgeeks.org/rearrange-array-maximum-minimum-form/
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
void solve(int arr[],int n){
   int temp[n];
   int first=0;
   int last=n-1;
   int count=0;
   while(count<n){
       temp[count++]=arr[last];
       temp[count++]=arr[first];
       last--;
       first++;
   }
   rep(i,0,n) cout<<temp[i]<<" ";
}
int main()
{
 
  int n;
  cin>>n;
  int arr[n];
  rep(i,0,n) cin>>arr[i];
  solve(arr,n);
  
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
