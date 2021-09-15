class Solution {
public:
    int thirdMax(vector<int>& nums) {
         long first=LONG_MIN;
         long second=LONG_MIN;
         long third=LONG_MIN;
        int flag=0;
         if(nums.size()==1) return nums[0];
        else if(nums.size()==2) return max(nums[0],nums[1]);
        else{
            for(int i=0;i<nums.size();i++){
                // cout<<first<<second<<third<<"\n";
                if(nums[i]==first || nums[i]==second || nums[i]==third) continue;
                
                if(nums[i]>first){
                    third=second;
                    second=first;
                    first=nums[i];
                
                }
                else if(nums[i]>second){
                    third=second;
                    second=nums[i];
                    
                }
                else if(nums[i]>third){
                    third=nums[i];
                    
                }
            }
        
           // cout<<first<<second<<third;
            
           if(third==LONG_MIN){return first;}
            return third;
        }
        
    }
};
