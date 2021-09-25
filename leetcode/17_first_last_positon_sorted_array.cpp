class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // unordered_map<int,int> mp;
        int low=0;
        int high=nums.size();
        int index=0;
        int count=0;
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                count++;
            }
        }
        
        if(count==0){
            vec.push_back(-1);
            vec.push_back(-1);
            return vec;
        }
        else{
            index=find_index(nums,low,high,target);
            if(count==1){
                vec.push_back(index);
                vec.push_back(index);
            }
            else{
                // cout<<index;
                vec.push_back(index);
                vec.push_back(index+count-1);
               
            }
            return vec;
        }
    }
private:
    int find_index(vector<int> nums,int low,int high,int target){
        int mid=0;
        int ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            cout<<mid<<"\n";
            if(nums[mid]==target) {
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
