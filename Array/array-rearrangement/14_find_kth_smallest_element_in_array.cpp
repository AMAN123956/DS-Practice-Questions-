// Problem Link :https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
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
  int n,k;
  cin>>n>>k;
  int arr[n];
  map<int,int> m;
  rep(i,0,n){
      cin>>arr[i];
   }
   rep(i,0,n){
      m[arr[i]]++;
   }
  int freq=0;
  int size=m.size();
 for (auto it = m.begin(); it != m.end(); it++) {
        freq += (it->second); // adding the frequencies of
                              // each element
        if (freq >= k) // if at any point frequency becomes
                       // greater than or equal to k then
                       // return that element
        {
            cout<<it->first;
            return;
        }
    }
    return; 
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
