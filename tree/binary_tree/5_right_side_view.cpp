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
     vector<vector<int>> levelOrder(TreeNode* root){
    if(root==NULL) return {};
    queue<TreeNode*> q;
    vector<vector<int>> res;
    
    q.push(root);
    while(q.size()!=0){
        int size=q.size();
        vector<int> ans;
        for(int i=0;i<size;i++){
            TreeNode* node = q.front();
            q.pop();
          
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            ans.push_back(node->val);
        }
        reverse(ans.begin(),ans.end());
        res.push_back(ans);
    }
    return res;
}
    vector<int> rightSideView(TreeNode* root) {
         vector<vector<int>> res = levelOrder(root);
         vector<int> ans;

        for(int i=0;i<res.size();i++){
           ans.push_back(res[i][0]);
        }
   return ans;
    }
};




// RECURSIVE APPROACH  =================================================================================================================================================

class Solution {
public:
   void solve(TreeNode* root,vector<int> &ans,int level){
       if(root == NULL) return;
       
       // it means a new level is reached push the element
       if(ans.size()==level) ans.push_back(root->val);
       
       solve(root->right,ans,level+1);
       solve(root->left,ans,level+1);
       
       return;
   } 
   
   vector<int> rightSideView(TreeNode* root) {
       vector<int> ans;
       if(root == NULL) return ans;
       int level = 0;
       solve(root,ans,level);
       return ans;
    }
};
