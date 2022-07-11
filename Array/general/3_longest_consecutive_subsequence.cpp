// Longest Consecutive Subsequence

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.

int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      unordered_map<int,bool> mp;
      for(int i=0;i<n;i++) mp[arr[i]] = true;
      for(int i=0;i<n;i++){
          if(mp.find(arr[i]-1)!=mp.end()){
              mp[arr[i]] = false;
          }
      }
      int mx = INT_MIN;
      int count = 0;
      for(auto it=mp.begin();it!=mp.end();it++){
          if(it->second == false) continue;
          else{
              int num = it->first;
              count = 0;
              while(mp.find(num)!=mp.end()){
                  count++;
                  num++;
              }
              mx = max(mx,count);
          }
      }
      return mx;
    }
