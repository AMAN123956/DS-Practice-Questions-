class Solution {
public:
    int rob(vector<int>& nums) {
        int inc=nums[0];
        int exc=0;
        int res=INT_MIN;
        int temp=0;
        if(nums.size()==1){
            return nums[0];
        }
        else if(nums.size()==2){
            return max(nums[0],nums[1]);
            
        }
        else{
        for(int i=1;i<nums.size();i++){
            temp=inc;
            inc=exc+nums[i];
            res=max(res,inc);
            exc=max(exc,temp);
            // cout<<inc<<" "<<exc<<"\n";
        }
        if(res!=INT_MIN)
        return res;
        else return 0;
        }
    }
};
