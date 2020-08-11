#include<iostream>
using namespace std;

int main()
{
    int *p,n;

    cin>>n;
    p=new int [n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<p[i]<<endl;
        cin>>p[i];
    }
    delete []p;
    return 0;
}
