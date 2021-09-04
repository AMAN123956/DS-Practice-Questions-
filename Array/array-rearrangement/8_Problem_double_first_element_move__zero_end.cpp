// Problem Link :https://www.geeksforgeeks.org/double-first-element-move-zero-end/
#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define rep(i, a, b) for (ll i=a; i<b; ++i)
typedef long long ll;
typedef vector<ll> vll;

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    rep(i,0,n) cin>>arr[i];
    vector<int> s;
    rep(i,0,n-1){
        if(arr[i]!=0 && arr[i+1]!=0){
            s.push_back(arr[i]*2);
            arr[i+1]=0;
            continue;
        }
        else if(arr[i]!=0 && arr[i+1]==0){s.push_back(arr[i]); continue;}
    } 
    if(arr[n-1]!=0) s.push_back(arr[n-1]);
    rep(j,s.size(),n) s.push_back(0);
    rep(i,0,s.size()) cout<<s[i]<<" ";
  return 0;
}

// Time Complexity: O(n)
