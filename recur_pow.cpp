#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n,m,o,s;
int recur(int n,int o) {
  if(o>1)
    return n*recur(n,o-1);
  else
    return n;}
int iter(int m,int s)
{int sum=m;
    for(int i=1;i<s;i++)
        m=sum*m;
    return m;}
int main()
{int f,g;
cout<<"Enter the base";cin>>n;
cout<<"Enter the power(recursive)";cin>>o;
cout<<"Enter the base";cin>>m;
cout<<"Enter the power(iterative)";cin>>s;
f=recur(n,o);
g=iter(m,s);
cout<<f<<" recursive"<<endl;
cout<<g;
return 0;
}

