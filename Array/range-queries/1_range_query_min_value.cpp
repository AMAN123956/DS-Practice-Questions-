// Problem: Minimum value in given range of array
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
// Struct to return multiple values from function
struct Pair{
    int min;
    int max;
};
// sqrt decomposition technique
void make_block(int arr[],int n,int block[],int len){
    int index=0;
    rep(i,0,len){
        block[i]=INT_MAX;
    }
    rep(i,0,n){
        index=i/len;
        if(arr[i]<block[index]) block[index]=arr[i];
    }
    
    return;
}
// query result
int getQueryResult(int arr[],int n,int block[],int len,int l,int r){
    int index=0;
    block[l/len]=arr[l];
    rep(i,l,r){
        index=i/len;
        if((i)%len==0){
           if(i+len-1<=r){
                i+=len;
            }
            else{
                if(arr[i]<block[index]) block[index]=arr[i];
            }
        }
        else{
            if(arr[i]<block[index]) block[index]=arr[i];
        }
    }
    int min=block[l/len];
    rep(i,l/len,len){
        if(block[i]<min) min=block[i];
    }
    return min;
    
}

void solve(){
    int n;
    int l,r,ans=0;
    cin>>n;
    int arr[n];
    rep(i,0,n) cin>>arr[i];
    cin>>l>>r;
    int len=ceil(sqrt(n));
    int block[len];
    // divide the array into sqrt(n) block
    make_block(arr,n,block,len);
    rep(i,0,3){
        cout<<block[i]<<" ";
    }
    cout<<"\n";
    // get query answer
    ans=getQueryResult(arr,n,block,len,l,r);
    cout<<ans;
    return;
}
int main()
{
 solve();
 
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)