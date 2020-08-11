#include<iostream>
using namespace std;

int exps(int x,int pow)
{
    static int p=1,f=1;
    int r;
    if(pow==0)
        return 1;
    else
    {
        r=exps(x,pow-1);
        p=p*x;
        f=f*pow;
        return r+p/f;
    }
    return 0;
}

int main()
{
    cout<<exps(4,5);
    return 0;
}


