// Given an array of 0’s and 1’s, we need to write a program to find the minimum number of swaps required to group all 1’s present in the array together.
#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define rep(i, a, b) for (ll i=a; i<b; ++i)
typedef long long ll;
typedef vector<ll> vll;

int main()
{
    ll n,count=0,bad=0,ans=0,j=0;
    cin>>n;
    ll arr[n];
    rep(i,0,n) {
        cin>>arr[i];
        if(arr[i]==1) count++;
    }
    rep(i,0,count){
        if(arr[i]==0) bad++;
    }
    ans=bad;
    // cout<<ans<<count<<"\n";
    for(int i=0,j=count;j<n;j++,i++){
        if(arr[i]==0) --bad;
        if(arr[j]==0) bad++;
        
        ans=min(ans,bad);
    }
    cout<<ans;
    
       
    return 0;
}
