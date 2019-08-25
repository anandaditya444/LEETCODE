string ans = "";

void decode_huff(node * root, string s) {
    node* cur = root;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '0')
            cur = cur->left;
        else
            cur = cur->right;
        if(!cur->left && !cur->right)
        {
            ans += cur->data;
            cur = root;
        }
    }
    cout<<ans<<endl;
}