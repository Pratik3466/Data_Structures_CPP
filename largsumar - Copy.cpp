#include<iostream>
using namespace std;

int inp[8];

int maxsum=-100;

void input()
{
    cout<<"Enter the array";
    for(int i=0;i<8;i++)
    {
        cin>>inp[i];
    }
}
void sub()
{

    for(int i=0;i<8;i++)
    {
        for(int j=i;j<8;j++)
            {
                int cursum=0;
                for(int k=i;k<=j;k++)
                {
                    cursum+=inp[k];
                }
                if(cursum>=maxsum)
                    maxsum=cursum;
            }
    }
    cout<<maxsum;
}
int main()
{
    input();
    sub();
    return 0;
}
