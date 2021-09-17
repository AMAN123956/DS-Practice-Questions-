class Solution {
public:
    int maxProduct(vector<int>& nums) {
       // store the result that is the max we have found so far
    int r = nums[0];
        int n=nums.size();

    // imax/imin stores the max/min product of
    // subarray that ends with the current number A[i]
    for (int i = 1, imax = r, imin = r; i < n; i++) {
        // multiplied by a negative makes big number smaller, small number bigger
        // so we redefine the extremums by swapping them
        if (nums[i] < 0)
            swap(imax, imin);

        // max/min product for the current number is either the current number itself
        // or the max/min by the previous number times the current one
        imax = max(nums[i], imax * nums[i]);
        imin = min(nums[i], imin * nums[i]);

        // the newly computed max value is a candidate for our global result
        r = max(r, imax);
    }
    return r;
    }
};
