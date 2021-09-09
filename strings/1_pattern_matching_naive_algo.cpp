// Pattern Matching - Naive Algorithm
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
  string s,p;
  int count=0,flag=0;
  cin>>s>>p;
  rep(i,0,s.length()){
      count=0;
      if(s[i]==p[0]){
          rep(j,i,i+p.length()){
              if(s[j]==p[count++]) continue;
              else {flag=1;break;}
          }
          if(flag==0) {cout<<"YES"<<i;break;return;}
      }
      else flag=1;
  }
  if(flag==1)
  cout<<"NO"<<"\n";
  return;
}
int main()
{
 solve();
  return 0;
}

// Time Complexity: O(n2)
// Space Complexity: O(1)
