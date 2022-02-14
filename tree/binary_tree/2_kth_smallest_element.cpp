Problem Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL) return -1;
        stack<TreeNode* > st;
        // max-heap to find kth smallest element
        priority_queue<int> q;
        st.push(root);
        while(st.size()!=0){
            root=st.top();
            st.pop();
            q.push(root->val);
            
            if(q.size()>k){
                q.pop();
            }
            
            if(root->left) st.push(root->left);
            if(root->right) st.push(root->right);
            
        }
        
        return q.top();
        
    }
};
