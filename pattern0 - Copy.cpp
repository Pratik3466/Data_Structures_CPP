#include<iostream>
#include<cmath>
using namespace std;
int c=1;
void pattern1()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<c<<" ";
            ++c;
        }
        cout<<endl;
    }

}
void pattern2(int n)
/*this code has error for every even digit of n*/
{
   for(int i=1;i<6;i++)
    {
        for(int j=1;j<i+5;j++)
        {
            if(j+i-5>0)
            cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            {
              cout<<"* ";
            }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--)
    {
        for(int j=i;j>0;j--)
            {
              cout<<"* ";
            }
        cout<<endl;
    }
}
void pattern4(int n)
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==0||i==4||j==0||j==4)
            cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

}
int main()
{
    int n;
    cin>>n;
    pattern1();
    cout<<endl;
    pattern2(n);
    cout<<endl;
    pattern3(n);
    cout<<endl;
    pattern4(n);
    return 0;

}
