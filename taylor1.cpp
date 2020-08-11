#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
void push(int x,node* head)
{
    node* t=new node();
    t->next=head;
    t->data=x;
}
void pop(node* top)
{
    node* p;
    p=top;
    p->next=top;
}
void display(node* n)
{
    while(n->next!=NULL)
        cout<<n->data;
    display(n->next);
}
int main()
{
    node* top=new node();
    node* second= new node();
    node* tail=new node();

    top->data=1;
    top->next=second;

    second->data=2;
    second->next=tail;

    tail->data=3;
    tail->next=NULL;

    push(3,top);
    display(top);
    return 0;
}
