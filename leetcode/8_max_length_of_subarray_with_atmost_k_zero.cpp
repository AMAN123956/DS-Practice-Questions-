class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int zeroCount = 0, l = 0;
        int maxLen = 0;
        for( int r = 0 ; r < nums.size() ; ++r ) {
            if( nums[ r ] == 0 ) ++zeroCount;
            while( zeroCount > k ) {
                if( nums[ l ] == 0 ) --zeroCount;
                ++l;
            }
            maxLen = max( maxLen, r - l + 1 );
        }
        return maxLen;
    }
};
