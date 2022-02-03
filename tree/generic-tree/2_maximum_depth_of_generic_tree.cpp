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
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
        int ht=0; // in terms of node
        for(Node* child: root->children){
            int ch=maxDepth(child);
            ht=max(ch,ht);
        }
        return ht+1;
    }
};
