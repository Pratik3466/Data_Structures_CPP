#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 class rectangle
{
public:
    int length;
    int breadth;
public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
        cout<<"The values of length and breadth are "<<length<<" ,"<<breadth;

    }
    void change()
    {
        length=1;
        breadth=1;
                cout<<"The values of length are "<<length<<" ,"<<breadth;

    }
    void area()
    {
                cout<<"The values of area are "<<length*breadth;

    }
};

int main()
{
    rectangle r1(10,5);
        if (r1.length==0||r1.breadth==0)
        r1.change();
    else r1.area();
    return 0;
}
