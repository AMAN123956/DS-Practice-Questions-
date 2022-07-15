 // Reverse String
// i/p : 'aman'
// o/p: 'nama'
// iterative approach
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return;
    }
};

// recursive approach
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        reverseHelper(s,i,j);
    }
    
    void reverseHelper(vector<char>& s,int i,int j){
        if(i > j) return;
        swap(s[i],s[j]);
        i++;
        j--;
        reverseHelper(s,i,j);
    }
};
