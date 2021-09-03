// Maximum sum sub-array of size k(3)
#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define rep(i, a, b) for (ll i=a; i<b; ++i)
typedef long long ll;
typedef vector<ll> vll;

int main()
{
    ll n,count=3,ans=0,sum=0;
    cin>>n;
    ll arr[n];
    rep(i,0,n) {
        cin>>arr[i];
    }
    // first sub-array calculation 
    rep(i,0,count){
        sum+=arr[i];
    }
    ans=sum;
    // cout<<ans<<count<<"\n";
    // moving through other sub-arrays
    for(int i=0,j=count;j<n;j++,i++){
        sum=(sum-arr[i])+arr[j];
        ans=max(ans,sum);
    }
    cout<<ans;
    
       
    return 0;
}

// Time Complexity:O(n)
