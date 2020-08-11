#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n;
int fact(int n)
{
    if(n>0)
        return fact(n-1)+fact(n-2);
        else
        return 0;
}
int main()
{
    cin>>n;
    cout<<fact(n);
    return 0;
}
