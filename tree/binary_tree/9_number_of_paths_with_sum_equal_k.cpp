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
    void solve(TreeNode* root,int &count,int sum,int targetSum,vector<int> &res){
        if(root==NULL) return;
        
        res.push_back(root->val);
        
        solve(root->left,count,sum,targetSum,res);
        solve(root->right,count,sum,targetSum,res);
        
        int size = res.size();
        for(int i=size-1;i>=0;i--){
            sum+=res[i];
            if(sum==targetSum) count++;
        }
        
        res.pop_back();
    }
    
    
    int pathSum(TreeNode* root, int targetSum) {
        int count=0;
        int sum=0;
        vector<int> res;
        solve(root,count,sum,targetSum,res);
        return count;
    }
};
