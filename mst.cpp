#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int >v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(22);
    sort(v.begin(),v.end());
    int k=v.size();
    for(int i=0;i<k;i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    cout<<k;
    return 0;
}
