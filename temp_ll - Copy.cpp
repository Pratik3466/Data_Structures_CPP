#include<iostream>
using namespace std;

class node{
public:
    node* next;
    int data;};

    node* head=NULL;

    node* get_node(int key)
    {
        node* temp=new node();
        temp->data=key;
        temp->next=NULL;
        return temp;
    }

    node* insert_node(node* head,int key)
    {
        if(head==NULL)
            head=get_node(key);
            else
            {
                head->next=insert_node(head->next,key);
            }
            return head;
    }
    void print(node* head)
    {
        while(head!=NULL)
        {
            cout<<head->data;
            head=head->next;
        }
    }
int  main()
{
    head=insert_node(head,1);
    head=insert_node(head,2);
    print(head);
    return 0;
}
