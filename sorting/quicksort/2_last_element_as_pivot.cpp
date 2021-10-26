class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        quickSort(nums,low,high);
        return nums;
    }
 public:
    void quickSort(vector<int>& nums,int low,int high){
        if(low==high || low>high) return;
        
        int pivot=nums[high];
        int pi=partition(nums,low,high,pivot);
        quickSort(nums,low,pi-1);
        quickSort(nums,pi+1,high);
    }
  public:
    int partition(vector<int>& nums,int low,int high,int pivot){
        
        int i=low;
        int j=low;
        while(i<=high){
            if(nums[i]?pivot){
                i++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        cout<<nums[j+1]<<"\n";
        return j-1;
    }
};
