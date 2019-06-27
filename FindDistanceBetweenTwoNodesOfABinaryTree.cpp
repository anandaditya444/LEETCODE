https://www.geeksforgeeks.org/find-distance-between-two-nodes-of-a-binary-tree/

//Not working properly

/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/* Should return minimum distance between a and b 
   in a tree with given root*/
Node* LCA(Node* root,int a,int b)
{
    if(!root || root->data == a || root->data == b)
            return root;
    Node* left = LCA(root->left,a,b);
    Node* right = LCA(root->right,a,b);
    
    return !left ? right : !right ? left : root;
}

int findLevel(Node* root,int ele,int level)
{
    if(root == NULL)
        return 0;
    if(root->data == ele)
        return level;
    if(root->left)
        return findLevel(root->left,ele,level+1);
    if(root->right)
        return findLevel(root->right,ele,level+1);
}
   
int findDist(Node* root, int a, int b)
{
    Node* lca = LCA(root,a,b);
    int d1 = findLevel(root,a,0);
    int d2 = findLevel(root,b,0);
    int d3 = findLevel(root,lca->data,0);
    return d1+d2-2*d3;
}