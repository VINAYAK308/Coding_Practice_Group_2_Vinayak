#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"\n Multiplication Table from 2 to 10: ";
    for(i=2;i<=10;i++)
    {   cout<<"\n Multiplication Table for "<<i<<" : ";
        for(j=1;j<=10;j++)
        {
            k=i*j;
            cout<<"\n"<<i<<"*"<<j<<"="<<k;
        }
        cout<<"\n";

    }


}