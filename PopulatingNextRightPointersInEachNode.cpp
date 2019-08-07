//Q .116

ITERATIVE SOLUTION

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return NULL;
        vector<Node*>v;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node* f = q.front();
            q.pop();
            if(f == NULL)
            {
                int sz = v.size();
                if(sz > 1)
                {
                    for(int i=1;i<sz;i++)
                        v[i-1]->next = v[i];
                }
                v.clear();
                if(!q.empty())
                    q.push(NULL);
            }
            else
            {
                v.push_back(f);
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }   
        }
        return root;
    }
};


RECURSIVE SOLUTION

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return NULL;
        if(root->left)
        {
            root->left->next = root->right;
            if(root->next)
                root->right->next = root->next->left;
        }
        connect(root->left);
        connect(root->right);
        
        return root;
    }
};