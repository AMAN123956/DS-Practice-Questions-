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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        vector<vector<int>> res;
        bool leftToRight = true;
        queue<TreeNode* > q;
        q.push(root);
        
        while(q.size()!=0){
            int size = q.size();
            vector<int> ans(size); 
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                
                // normal or reverse insertion
                int index = leftToRight ? i : size-i-1;
                ans[index] = node->val;
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            leftToRight = !leftToRight;
            res.push_back(ans);
            
        }
        return res;
    }
};

Time Complexity : O(n)
Space Complexity : O(n)
