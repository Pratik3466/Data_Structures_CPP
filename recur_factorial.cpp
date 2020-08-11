#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n,m;
int recur(int n) {
  if(n>=1)
    return n+recur(n-1);
  else
    return n;
        }
int iter(int m)
{int sum=0;
    for(int i=0;i<=m;i++)
    sum+=i;
    return sum;
}
int main()
{
    int f,g;
cin>>n;
cin>>m;
f=recur(n);
g=iter(m);
cout<<f<<endl;
cout<<g;
return 0;
}
