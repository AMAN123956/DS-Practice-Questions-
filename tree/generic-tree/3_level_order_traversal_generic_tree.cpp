/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
   vector<vector<int>> res;
    public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<int> ans;
        queue<Node* > q;
          queue<Node* > t;
        q.push(root);
        while(q.size() > 0){
            int count=q.size();
            for(int i=1;i<=count;i++){
             root=q.front();
             q.pop();
             ans.push_back(root->val);
             for(Node* child: root->children){
                 q.push(child);
            }
                
            }
            res.push_back(ans);
            ans.clear();
            
            
        }
        return res;
    }
};
