// Problem: Minimum and Maximum of An Array
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
struct Pair getMinMax(int arr[],int n){
    struct Pair minmax;
    int i=1;
    if(n==1){
        minmax.min=arr[0];
        minmax.max=arr[0];
    }
    // If there are more than one elements,
    // then initialize min and max
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    
    for(i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)    
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)    
            minmax.min = arr[i];
    }
    return minmax;
}
     

void solve(){
    int n;
    cin>>n;
    int arr[n];
    rep(i,0,n) cin>>arr[i];
    struct Pair minmax=getMinMax(arr,n);
    cout<<minmax.min<<"\n";
    cout<<minmax.max;
    return;
}
int main()
{
 solve();
 
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
