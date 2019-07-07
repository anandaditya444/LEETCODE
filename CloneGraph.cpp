//Q. 133

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node() {}

    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    unordered_map<Node*,Node*>m;
    Node* cloneGraph(Node* node) {
        if(!node)
            return NULL;
        queue<Node*>q;
        Node* copy = new Node(node->val,{});
        m[node] = copy; 
        q.push(node);
        while(!q.empty())
        {
            Node* temp = q.front();
            q.pop();
            for(auto x:temp->neighbors)
            {
                if(m.find(x) == m.end())
                { 
                    m[x] = new Node(x->val,{});
                    q.push(x);
                }
                m[temp]->neighbors.push_back(m[x]);
            }
        }
        return copy;
    }
};