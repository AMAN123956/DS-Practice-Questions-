#include <iostream>
#include<unordered_set>
using namespace std;
int find_distinct_element(int arr[],int n){
    unordered_set<int> set;
    for(int i=0;i<n;i++) set.insert(arr[i]);
    
    return set.size();
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int ans=0;
	ans=find_distinct_element(arr,n);
	cout<<ans;
	return 0;
}


// Time Complexity : O(n)
