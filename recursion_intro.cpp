#include<iostream>
using namespace std;
//normal factorial code.
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
    {
        while(n>1)
        {
            return n*fact(n-1);
        }
    }
}
//normal fibonacci.
int fib(int n)
{
    if(n<=1)
    return n;
    else if(n==2)
        return 1;
    else if(n>2)
    {
         return fib(n-1)+fib(n-2);
    }
}
//declaring an array that stores all the fibonacci sequences.
int f[10]={0,1,1,1,1,1,1,1,1,1};

int fibonacci(int n)
{
    if(n<=1)
        return f[n];
        else
        {
            f[n]=fibonacci(n-1)+fibonacci(n-2);
        }
        return f[n];
}
int main()
{

    //cout<<fact(15)<<endl;
    cout<<fib(10)<<endl;
    cout<<fibonacci(10);
}
