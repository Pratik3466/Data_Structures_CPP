#include<iostream>
using namespace std;
class node{
public:
    node* link;
    int data;
    };
    node* top=NULL;
void push(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->link=top;
    top=temp;
}
void pop()
{
    node* temp;
    if(top==NULL)
        return;
    top=top->link;
    delete(temp);
}
int main()
{
    push(2);
    push(3);
    push(4);
    while(top!=NULL)
    {
        cout<<top->data;
        top=top->link;
    }
    return 0;
}
