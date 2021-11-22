class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int size=digits.size();
       if(digits[size-1]!=9){
           digits[size-1]+=1;
       }
        else{
            int i=size-1;
            int count=0;
            while(i>=0 && digits[i]==9){
                count++;
                i--;
            }
            
            cout<<count<<"\n";
            
            if(size==count){
                cout<<"here";
                digits.clear();
                digits.push_back(1);
                for(int i=1;i<=count;i++){
                     digits.push_back(0);
                }
            }
            // count < size
            else{
                vector<int> res;
                for(int i=0;i<size-count;i++){
                    res.push_back(digits[i]);
                }
                for(int i=1;i<=count;i++){
                    res.push_back(0);
                }
                res[size-count-1]+=1;
                return res;
            }
            
        }
        return digits;
    }
};
