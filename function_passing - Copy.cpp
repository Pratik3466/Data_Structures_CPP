#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct rectangle{
int length;
int breadth;

};
int area(struct rectangle* r1,int n)
{
    int area=(r1->length)*(r1->breadth)*n;
    return area;

}
int main()
{
    struct rectangle r1;

    cin>>r1.length;
    cin>>r1.breadth;
    cout<<area(&r1,5);
    return 0;
}
