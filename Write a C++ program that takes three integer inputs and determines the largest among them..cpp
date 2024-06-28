#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"\n Enter the value of num1: ";
    cin>>num1;
    cout<<"\n Enter the value of num2: ";
    cin>>num2;
     cout<<"\n Enter the value of num3: ";
    cin>>num3;
    if(num1>num2 and num1>num3)
    {
        cout<<"\n num1 is largest number";
    }
    else if(num2>num3 and num2>num1)
    {
        cout<<"\n num2 is largest number";
    }
    else
    {
        cout<<"\n num3 is largest number";
    }



}
