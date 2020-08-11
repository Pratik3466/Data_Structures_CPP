#include<iostream>
using namespace std;

 class node
 {
     public:
     node* lchild;
     node* rchild;
     int data;
 };
 //pointer to the root of the tree.
 node* root=NULL;

 //function that generates new node objects
  node* get_node(int key)
 {
     node* temp=new node();
     temp->data=key;
     temp->lchild=NULL;
     temp->rchild=NULL;
     return temp;
 }
 //inserting nodes recursively.
node* insert_node(node* root,int key)
{
    if(root==NULL)
        root=get_node(key);
    else if(root->data<key)
    {
        root->lchild=insert_node(root->lchild,key);
    }
    else
    {
        root->rchild=insert_node(root->rchild,key);
    }
    return root;
}

 void search_node(node* root,int key)
 {
     if(root->data==key)
        cout<<"found";
     else if(root->data<key)
     {
         search_node(root->lchild,key);
     }
     else
    {
        search_node(root->rchild,key);
    }
 }
 void preorder(node* root)
 {
     if(root==NULL)
        return;
     else
     {
         cout<<root->data;
         preorder(root->lchild);
         preorder(root->rchild);
     }
 }
int main()
{
    root=insert_node(root,1);
    root=insert_node(root,2);
    root=insert_node(root,3);
    root=insert_node(root,4);
    root=insert_node(root,5);
    root=insert_node(root,6);

    search_node(root,3);
    preorder(root);
    return 0;
}
