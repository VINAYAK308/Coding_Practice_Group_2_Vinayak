#include<iostream>
using namespace std;
int main()
{
    int i,j,num=3;
    for(i=num;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;

}
