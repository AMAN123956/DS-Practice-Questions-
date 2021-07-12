#include<bits/stdc++.h> 
using namespace std; 
// @Aman Dixit Code
// =====================================================================================================================================================================
#define rep(i, a, b) for(ll i=a;i<b;i++)
#define pb push_back
#define lcm(a,b)     (a*b)/__gcd(a,b)
#define bs(v,x)      binary_search(v.begin(),v.end(),x)
#define ub(v,x)      upper_bound(v.begin(),v.end(),x)
#define lb(v,x)      lower_bound(v.begin(),v.end(),x)
#define IOs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) (a).begin(),(a).end() 
#define trace(v) for(auto it=v.begin();it!=v.end();it++)cout<<*it<<" ";cerr<<endl;
#define Pi 3.14159265
#define mp make_pair
#define pll pair<ll, ll> 
#define pq1 priority_queue<ll>
#define pq2 priority_queue<ll, vector<ll>,greater<ll>>
#define ck(f) (f ? "YES" : "NO")
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
typedef bool B;
typedef long double ff; 
char en='\n';
void fileIO(){
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("out.txt", "w", stdout); 
#endif
} 

void solve(){
    int res=INT_MAX;
    string str;
    cin>>str;
    int count[256]={-1};
    rep(i,0,str.length()){
        if(count[str[i]]==-1) count[str[i]]=i;
        else res=min(count[str[i]],i);
    }
    res==INT_MAX ? cout<<'-1'; : cout<<res;
   
    
}

int main() 
{ 
      ios_base::sync_with_stdio(false);cin.tie(NULL); 
      fileIO();  
      ll tst=1;
      cin>>tst;
      while(tst--) 
      { 
         solve();  
         cout<<en;
      }
      cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
      return 0; 
}




// Note : Time Complexity: O(n) 