class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long sum=0;
        long res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        res=sum-x;
        if(res<0) return -1;
        else if(res == 0) return nums.size();
        else{
            // longest subarray with sum equal to res;
            int i=0;
            int j=0;
            int total=0;
            int ans=INT_MIN;
            while(j<nums.size()){
                total+=nums[j];
                if(total<res) j++;
                else if(total==res){
                    ans=max(ans,j-i+1);
                    j++;
                }
                else if(total>res){
                    while(total>res){
                        total-=nums[i];
                        i++;
                    }
                    if(total == res){
                        ans=max(ans,j-i+1);
                    }
                    j++;
                }
            }
            return ans== INT_MIN ? -1:(nums.size()-ans);
        }
        
    }
};
