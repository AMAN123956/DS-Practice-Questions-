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
    vector<int> l;
    int i=0,j=0;
   
    while(j<n){
        // -ve number push in vector
        // cout<<j<<" ";
        if(arr[j] < 0)
            l.push_back(arr[j]);
        
        if(j-i+1 < k) j++;
        else if(j-i+1 == k){
            if(l.size()==0) s.push_back(0);
            else s.push_back(l.front());
            
            if(arr[i]<0 && arr[i]==l.front()) l.erase(l.begin());
            
            i++;
            j++;
        }
        
    }
    
    // Printing Numbers
    rep(i,0,s.size()){
        cout<<s[i]<<" ";
    }
   
  return 0;
}
