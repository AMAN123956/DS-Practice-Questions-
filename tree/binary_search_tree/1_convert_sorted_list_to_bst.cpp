/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> nums;
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) return NULL;
        
        
        while(head!=NULL){
            nums.push_back(head->val);
            head=head->next;
        }
        int low=0;
        int high = nums.size()-1;
        for(int i=0;i<=high;i++){
            cout<<nums[i]<<" ";
        }
        
        return helper(nums,low,high);
    }
   TreeNode* helper(vector<int>& nums, int low, int high) {
        while(low<=high) {
             int mid=low+(high-low)/2;
             TreeNode *root=new TreeNode(nums[mid]);
             root->left=helper(nums,low,mid-1); //values lower than root will be added towards the left of the root.
             root->right=helper(nums,mid+1,high); //values higher than root will be added towards the right of the root.
             return root;
         }
         return NULL;
     }
};
