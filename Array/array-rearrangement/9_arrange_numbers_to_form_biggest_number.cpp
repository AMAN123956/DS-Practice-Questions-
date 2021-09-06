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
int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
 
    // then append X at the end of Y
    string YX = Y.append(X);
 
    // Now see which of the two
    // formed numbers is greater
    return XY.compare(YX) > 0 ? 1 : 0;
}
 
void printNumber(vector<string> arr,int n){
    sort(arr.begin(),arr.end(),myCompare);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
}
int main()
{
  int n;
  string a;
  cin>>n;
  vector<string> arr;
  rep(i,0,n) {cin>>a; arr.push_back(a);}
  printNumber(arr,n);
  return 0;
}

// Time Complexity: O(n)
