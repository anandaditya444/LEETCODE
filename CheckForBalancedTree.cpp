int height(Node* root)
{
    if(!root)
        return 0;
    int ls = height(root->left);
    int rs = height(root->right);
    
    return max(ls,rs)+1;
}
bool isBalanced(Node *root)
{
    if(!root)
        return true;
    int ls = height(root->left);
    int rs = height(root->right);
    if(abs(ls-rs) > 1)
        return false;
    
    return isBalanced(root->left) && isBalanced(root->right);
}