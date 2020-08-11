#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
};

void printlist(node* n)
{
    while(n!=NULL)
        {cout<<n->data;
    n=n->next;}
    return;
}
void inserts(node* n,int y)
{
            node* new_node=new node();
            new_node->data=y;
                    (new_node->next)=(n->next);n->next=new_node;

    return;
}
void look(node *n,int x)
{
    while(n!=NULL){
    if(n->data==x)
    {
    cout<<"found"<<endl;
    n=n->next;
    }
    else{cout<<"not found"<<endl;
        return look(n->next,x);}
    }
}
void sorts(node* n)
{
    while(n!=NULL)
    if((n->next)<n)
    {
    int temp=0;
        temp=n->data;
        n->data=(n->next)->data;
        (n->next)->data=temp;
        cout<<n->data<<endl;}
        else
        n=n->next;
        cout<<n->data;
        n=n->next;
        return;
}
int main()
{

    node* head=new node();

    node* middle=new node();

    node* tail=new node();


    head->data=1;
    middle->data=2;
    tail->data=3;

    head->next=middle;
    middle->next=tail;
    tail->next=NULL;

    inserts(head,5);
    look(head,5);
    printlist(head);
    sorts(head);
    printlist(head);
    return 0;
}
