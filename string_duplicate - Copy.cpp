#include<iostream>
using namespace std;
void print(int n)
{
    int x=1;
    for(int i=0;i<n;i++)
    {
        cout<<x<<endl;
        x*=11;

    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
