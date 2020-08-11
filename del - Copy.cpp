#include<iostream>
using namespace std;

int n;
int sums=0;
int sum(int n)
{
    if(n>0)
        return sum(n-1)+n;
    else
        return 0;
}
int main()
{
    cin>>n;
    cout<<sum(n);

    return 0;
}
