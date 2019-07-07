#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e3+5;
int a[N];
int t,n;

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

node* constructBST(int start,int end)
{
	if(start > end)
		return NULL;
	int mid = (start+end)/2;
	node* root = new node;
	root->data = a[mid];
	root->left = constructBST(start,mid-1);
	root->right = constructBST(mid+1,end);

	return root;
}

void preorder(node* root)
{
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		//node* root = new node;
		int start = 0,end = n-1;
		node* root = constructBST(start,end);
		preorder(root);
	}



	return 0;
}