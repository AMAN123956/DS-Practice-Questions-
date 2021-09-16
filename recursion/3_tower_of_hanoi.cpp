// Tower of Hanoi using Recursion
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
void toh(int n,int a,int b,int c){
    // base condition
    if(n==0) return;
    
    toh(n-1,a,c,b);
    cout<<n<<"["<<" "<<a<<" "<<b<<" "<<"]"<<"\n";
    toh(n-1,c,b,a);
}
void solve(){
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  toh(n,a,b,c);
  return;
}
int main()
{
 solve();
  return 0;
}

