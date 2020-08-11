#include<iostream>
using namespace std;

struct sooar
{

    int a;
    char name[10];
    sooar *next
};
sooar *nptr,*start,*temp;
nptr->next=NULL;
void insert()
{

    nptr=new int;
    cin>>nptr->a;
    gets(nptr->name);
    if(start==NULL)
     start=nptr;
    else
    {
        nptr->next=start;
        start=nptr;


    }
}
void delete()
{

    if(start=NULL)
        cout<<"underflow";
    else
    {
        temp=start;
        start=start->next;
        delete temp;

    }
}
int main()
{
    node* head=new node();
    void inserts();
    return 0;
}
