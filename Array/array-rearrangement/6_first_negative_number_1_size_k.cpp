#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define rep(i, a, b) for (ll i=a; i<b; ++i)
typedef long long ll;
typedef vector<ll> vll;

int main()
{
    ll n,k;
    int flag=0,start=0,end=0,ch=0;
    cin>>n>>k;
    ll arr[n];
    rep(i,0,n) cin>>arr[i];
    vector<int> s;
    
    rep(i,0,k){
        if(arr[i]<0) {s.push_back(arr[i]);flag=1;break;}
    }
    if(flag==0) s.push_back(0);
    
    for(int i=0,j=k;j<n;i++,j++){
        start=i+1;
        end=j+1;
        ch=0;
        rep(t,start,end){
            if(arr[t]<0){s.push_back(arr[t]);
                ch=1;
                break;
            }
        }
        if(ch==0) s.push_back(0);
    }
    
    // Printing Numbers
    rep(i,0,s.size()){
        cout<<s[i]<<" ";
    }
   
  return 0;
}
