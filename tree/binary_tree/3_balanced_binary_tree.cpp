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
    bool isBalanced(TreeNode* root) {
        int res = checkHeight(root);
        if(res == -1) return false;
        else return true;
    }
    
    int checkHeight(TreeNode* root){
        if(root == NULL) return 0;
        
        int lh = checkHeight(root->left);
        cout<<"lh"<<lh<<"\n";
        if(lh == -1) return -1;
        int rh = checkHeight(root->right);
         cout<<"rh"<<rh<<"\n";
        if(rh==-1) return -1;
        if(abs(lh-rh) > 1) return -1;
        else return 1+max(lh,rh);
    }
};
