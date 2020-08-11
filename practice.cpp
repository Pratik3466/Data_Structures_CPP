#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool name(string str)
{
    string str_rev;int counts=0;
    for(int i=str.length()-1,j=0;i>=0,j<str.length();i--,j++)
    {
        str_rev[j]=str[i];
    }
    for(int i=0;i<str.length();i++)
        if(str[i]==str_rev[i])
            counts++;

    if(counts==str.length())
        return true;
    else
        return false;

}

int main()
{
    string str;
    cout<<"Enter a string";
    cin>>str;
    //cout<<str.length()<<endl;
    cout<<name(str);
    return 0;
}
