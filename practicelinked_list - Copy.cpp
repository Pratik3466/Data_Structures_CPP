#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
};

int sum(node *n)
{
    if(n==NULL)
        return 0;
    else
        return sum(n->next)+n->data;
}

int counts(node *n)
{
    static int countss=0;
    if(n==0)
        return countss;
    else
        { ++countss;
        counts (n->next);}
}

int main()
{

    node* header=new node();
    node* second=new node();
    node* third=new node();
    node* fourth=new node();

    header->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=0;

    header->data=1;
        second->data=2;

            third->data=3;

                fourth->data=4;
                cout<<sum(header)<<endl;
                cout<<counts(header);

    return 0;
}
