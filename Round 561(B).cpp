Problem Name:All Vowels Please

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
  ll k,m,n;
  ll one=1;
  cin>>k;
   n=5;
   string str="aeiou";
   ll count=0;
  int flag=0;
  
  if(k<25) cout<<"-1";
  else{
      while(flag==0 && n<k/2){
                if(k%n==0){
                    m=k/n;
                    if(m>=5)
                    flag=1;
                    else n++;
                }
                else{
                    n++;
                }
            }
            if(flag==1){
            // cout<<m<<n;
            for(int i=0;i<min(m,n);i++){
                count=i;
                for(int j=0;j<max(m,n);j++){
                    if(count<5) {cout<<str[count];count++;}
                    else{
                        count=0;
                        cout<<str[count];
                        count++;
                    }
                }
                // cout<<"\n";
            }
            }
            else cout<<"-1";
     
     
  }
  
   
}

int main() 
{ 
      ios_base::sync_with_stdio(false);cin.tie(NULL); 
      fileIO();  
        ll tst;
          solve();  
          cout<<en;
        
     
      cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
      return 0; 
}
