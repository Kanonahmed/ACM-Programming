#include<bits/stdc++.h>
using namespace std;
struct bst
{
    int data;
    bst *left;
    bst *right;
};
bst* getnewnode(int data)
{
    bst* newnode=new bst();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
bst* insert(bst* root,int data)
{
    if(root==NULL)root = getnewnode(data);
    else if(data<=root->data)root->left=insert(root->left,data);
    else root->right= insert(root->right,data);

    return root;
}
bool search(bst* root,int data)
{
    if(root==NULL)return false;
    else if(data==root->data)return true;
    else if(data>root->data)return search(root->right,data);
    else return search(root->left,data);
}
void traverse(bst* root)
{
    cout<<root->data<<endl;
    if(root->left!=NULL)traverse(root->left);
    if(root->right)traverse(root->right);
}
int main()
{
  bst* root=NULL;
   root=insert(root,1);
   root=insert(root,2);
   root=insert(root,3);
   root=insert(root,4);
   root=insert(root,5);
   root=insert(root,6);
   traverse(root);
   while(1)
   {
       int n;
       cin>>n;
       int rs=search(root,n);
       if(rs)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }


    return 0;
}
