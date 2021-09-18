class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        long sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        if(sum%3!=0) return false;
        else{
            long fsum=0;
            int count=0;
            for(int i=0;i<arr.size();i++){
                fsum+=arr[i];
                if(fsum==sum/3){
                    count++;
                    fsum=0;
                }
                if(count==3){
                    return true;
                    break;
                }
            }
            return false;
        }
    }
};
