#include<iostream>
#include<bits/stdc++.h>
using namespace std;
std::stack<char>s1;
void func(string str,int len)
{
    for(int i=0;i<len;i++)
    {
        if(str.at(i)>96&&str.at(i)<123)
            cout<<str.at(i);
        else
        {

        }
    }
}
int main()
{
    string str;
    cout<<"Enter the expression ";
    cin>>str;
    int len=str.length();
    func(str,len);
    return 0;
}
