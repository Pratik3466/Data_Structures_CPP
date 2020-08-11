#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int>arr;
    for(int i=0;i<5;i++)
    {
        arr.push_back(i);
    }
    arr.resize(3);
    arr.empty();
    cout<<arr.size();
    for(int i=0;i<5;i++)
        cout<<arr[i]<<endl;
    cout<<arr.max_size();

    return 0;
}
