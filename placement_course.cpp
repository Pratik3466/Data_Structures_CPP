#include<iostream>
using namespace std;



void createheap(int arr[],int n)
{
    int i=n,temp = arr[n];
    while(i>1&&temp>arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}


int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90};
    for(int i=2;i<=9;i++)
    {
        createheap(arr,arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
