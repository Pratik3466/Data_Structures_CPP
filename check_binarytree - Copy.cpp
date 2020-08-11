#include<iostream>
using namespace std;

class node
{
    public:
    node* lchild;
    node* rchild;
    int data;
};
node* root=NULL;
node* get_node(int key)
{
    node* temp=new node();
    temp->lchild=temp->rchild=NULL;
    temp->data=key;
    return temp;
}
node* insert_node(node* root,int key)
{
    if(root==NULL)
        root=get_node(key);
    else if(root->data<key)
    {
        root->rchild=insert_node(root->rchild,key);
    }
    else
    {
        root->lchild=insert_node(root->lchild,key);
    }
    return root;
}
void search_node(node* root,int key)
{
    if(root->data==key)
        cout<<"Found";
    else if(root->data<key)
        search_node(root->rchild,key);
    else if(root->data>key)
        search_node(root->lchild,key);
    else
    {cout<<"Not found.";return;}
}
bool isgreater(node* root,int value)
{
    if(root==NULL)
        return true;
    if(root->data>value&&isgreater(root->lchild,value)&&isgreater(root->rchild,value))
        return true;
    else
        return false;

}
bool islesser(node* root,int value)
{
    if(root==NULL)
        return true;
    if(root->data<value&&islesser(root->lchild,value)&&islesser(root->rchild,value))
        return true;
    else
        return false;

}
bool isbinarysearchtree(node* root)
{
    if(root==NULL)
        return true;
    if(islesser(root->lchild,root->data)&&isgreater(root->rchild,root->data)&&isbinarysearchtree(root->lchild)&&isbinarysearchtree(root->rchild))
        return true;
    else
        return false;

}

int  main()
{
    root=insert_node(root,7);
    root=insert_node(root,4);
    root=insert_node(root,9);
    root=insert_node(root,1);
    root=insert_node(root,6);
    search_node(root,6);
    cout<<endl;
    cout<<isbinarysearchtree(root);
    return 0;
}
