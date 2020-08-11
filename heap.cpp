#include<iostream>
using namespace std;
void insert_heap(int heap[],int h)
{
    int i=h;
    int temp=heap[i];
    while(i>1&&temp>heap[i/2])
    {
        heap[i]=heap[i/2];
        i=i/2;
    }
    heap[i]=temp;
}
int main()
{
   int heap[]={0,10,20,30,40,50,60,70,80,90};
   for(int i=2;i<=9;i++)
    insert_heap(heap,i);
     for(int i=1;i<=9;i++)
    cout<<"\t"<<heap[i];

    return 0;
}
