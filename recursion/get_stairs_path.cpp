// Get Stairs Path(Jump of 1/2/3 allowed)
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
// First and Last firstAndLastIndex
int firstAndLastIndex(int arr[],int n,int target,int idx){
    if(idx==n) return -1;
    if(arr[idx]==target){
        return idx;
    }
    int fiid = firstAndLastIndex(arr,n,target,idx+1);
    if(arr[idx])
    return fiid;
    
}

// get subsequences 

vector<string> getStairsPath(int n){
   if(n==0){
       vector<string> bres;
       bres.push_back(" ");
       return bres;
   }
   if(n<0){
       vector<string> bres;
       return bres;
   }
   
   vector<string> paths1 = getStairsPath(n-1);
   vector<string> paths2 = getStairsPath(n-2);
   vector<string> paths3 = getStairsPath(n-3);
   vector<string> paths;
   for(path: paths1){
       paths.add("1"+path);
   }
   for(path: paths2){
       paths.add("2"+path);
   }
   for(path: paths3){
       paths.add("3"+path);
   }
   
   return paths;
}


void solve(){
    string str;
    cin>>str;
    vector<string> res = gss(str);
    return;
}
  
int main()
{ 
// ll t;
// cin>>t;
// while(t--)
solve();
  return 0;
}
