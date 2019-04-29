//Q.590

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int>v;
    vector<int> postorder(Node* root) {
        if(root == NULL)
            return v;
        for(auto x:root->children)
            postorder(x);
        v.push_back(root->val);
        return v;
    }
};