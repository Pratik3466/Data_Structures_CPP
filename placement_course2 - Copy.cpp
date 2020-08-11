#include<iostream>
using namespace std;

void rot(int a[],int r,int n,int disp)
{
    int arr[n];
    for(int i=1;i<=r;i++)
    {
        arr[0]=a[n-1];
        for(int j=0;j<n;j++)
        {
            arr[j+1]=a[j];
        }
        for(int j=0;j<n;j++)
        {
            a[j]=arr[j];
        }
    }
    for(int i=0;i<disp;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<" ";
    int r=0;
    cin>>r;
    cout<<" ";
    int disp;
    cin>>disp;
    cout<<" "<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<" ";
    }
    rot(a,r,n,disp);
    return 0;
}
