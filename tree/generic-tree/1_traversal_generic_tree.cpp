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
    vector<int> res;
    
// preorder traversal
public:
    vector<int> preorder(Node* root) {
        if(!root) return {};
        res.push_back(root->val);
     
        for(Node* child: root->children){
            preorder(child);
        }
        
        return res;
    }
    
// post order traversal
     vector<int> postorder(Node* root) {
         if(!root) return {};
       
     
        for(Node* child: root->children){
            postorder(child);
        }
         res.push_back(root->val);
        return res;
    }
 
    
};
