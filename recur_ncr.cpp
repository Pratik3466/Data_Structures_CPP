#include<iostream>
using namespace std;

int n,m;

int nfact(int n)
{ if(n>1)
  {
    return n*nfact(n-1);
  }
  else
    {
        return n;
    }

    }

    int nrfact(int r)
    {
         if(r>1)
  {
    return r*nrfact(r-1);
  }
  else
    {
        return r;
    }

    }
    int rfact(int m)
    {
         if(m>1)
  {
    return m*rfact(m-1);
  }
  else
    {
        return m;
    }
    }

int main()
{
    int nfact1,rfact1,nrfact1;
    cin>>n;
    cin>>m;
            int r=n-m;

    nfact1=nfact(n);
    nrfact1=nrfact(r);
    rfact1=rfact(m);
    cout<<nfact1/(nrfact1*rfact1);
    return 0;
}
