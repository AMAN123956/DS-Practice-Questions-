// Note: All the elements of array are greater than or equal to zero
// Optimized One Using Hashmaps








// Brute Force
#include <iostream.h>
#include<unordered_set>
using namespace std;
int find_distinct_element(int arr[],int n){
    unordered_set<int> set;
    for(int i=0;i<n;i++) set.insert(arr[i]);
    
    return set.size();
}

int main() {
	// your code goes here
	int n,flag=0,res,start_index=0,end_index=0,sum=0;
	cin>>n>>res;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n-1;i++){
        sum=arr[i];
       
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum==res){
               start_index=i;
                end_index=j;
                flag=1;
                break;
            }
            else if(sum>res) break; // As all the elements are greater than zero
        }
    }
    if(flag==1){
        // 
        cout<<start_index<<" "<<end_index;
    }
    else cout<<-1;
}

// Time Complexity: O(n2)

