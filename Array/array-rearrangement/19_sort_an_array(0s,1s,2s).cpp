// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int c0=0;
 int c1=0;
 int c2=0;
 for(int i=0;i<n;i++){
     if(a[i]==0) c0++;
     else if(a[i]==1) c1++;
     else c2++;
 }
 int count=0;
 while(c0!=0){
     a[count++]=0;
     c0--;
 }
 while(c1!=0){
     a[count++]=1;
     c1--;
 }
 while(c2!=0){
     a[count++]=2;
     c2--;
 }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
