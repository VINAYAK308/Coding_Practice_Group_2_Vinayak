#include<iostream>
using namespace std;
int main()
{
    int num , i , j , k;
    cout<<"\n Enter the number: ";
    cin>>num;
    cout<<"\n Multiplication Table of "<<num<<" is: ";
    for(i=1;i<=10;i++)
    {
        k=i*num;
        cout<<"\n"<<num<<"*"<<i<<"="<<k;
    }
}