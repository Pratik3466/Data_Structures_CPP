#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool inpre(stack <char> s1,int len,string str)
{
    for(int i=0;i<len;i++)
    {
        //if char is opening insert
        if(str.at(i)=='('||str.at(i)=='{'||str.at(i)=='[')
            s1.push(str.at(i));
            //if char is closing pop out.
        else if(str.at(i)==')'||str.at(i)=='}'||str.at(i)==']')
            s1.pop();
            else
                cout<<"";
    }
    //IF STACK IS EMPTY THEN THERE IS A REMAINING BRACKET.
    if(s1.empty())
        return true;
    else
        return false;
}

int main()
{
    //enter a string
    string str;
    cin>>str;
    int len=str.length();

    //declare a stack using STL
    stack <char> s1;

    cout<<inpre(s1,len,str);
    return 0;
}
