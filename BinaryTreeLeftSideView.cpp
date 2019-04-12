void leftView(Node *root)
{
   if(root == NULL)
    return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int cnt = 0;
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cnt = 0;
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cnt++;
            if(cnt == 1)
                cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        
    }
}