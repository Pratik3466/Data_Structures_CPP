#include<iostream>
using namespace std;
struct card{
int value=0;
int face=0;
};
int main()
{
    struct card deck[2];
    struct card* p;
    cout<<deck[0].value;
    cout<<deck[1].value;
    p->face=5;
    cout<<*p
    return 0;
}
