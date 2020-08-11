#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool inpre(stack <char> s1,int len,string str)
{
    for(int i=0;i<len;i++)
    {
        if(str.at(i)=='('||str.at(i)=='{'||str.at(i)=='[')
            s1.push(str.at(i));
        else if(str.at(i)==')'||str.at(i)=='}'||str.at(i)==']')
            s1.pop();
            else
                cout<<s1.top();
    }
    if(s1.empty())
        return true;
    else
        return false;
}

int main()
{
    string str;
    cin>>str;
    int len=str.length();
    stack <char> s1;
    cout<<inpre(s1,len,str);
    return 0;
}
