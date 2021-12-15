class Solution {
public:
    int nextGreaterElement(int n) {
        string str = to_string(n);
         char arr[str.length()];
        // converting string into character array
        for(int i=0;i<str.length();i++){
            arr[i]=str[i];
        }
        // find dip
        int i=str.length()-2;
        while(i>=0 && arr[i]>=arr[i+1]) i--;
       
        if(i==-1) return -1;
        else{
        // find next greater element
        int k=str.length()-1;
        while(arr[i]>=arr[k] ) k--;
        // swap i from k
        swap(arr[i],arr[k]);
        
        // concatenate from 0 to i
        string ans;
        for(int j=0;j<=i;j++) ans+=arr[j];
            
        // concatenate from k to i+1;
        for(int j=str.length()-1;j>=i+1;j--) ans+=arr[j];
        // cout<<"ans"<<ans<<"\n";
        long res=0;
        int count=0;
        for(int i=ans.length()-1;i>=0;i--){
            // cout<<ans[i]<<" "<<"\n";
            res+=(ans[i]-'0')*pow(10,count);
            count++;
        }
        if(res>INT_MAX || res<INT_MIN) return -1;
        else
        return res;
        }
        
        
        
    }
};
