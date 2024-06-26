#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"\n Enter value of num1: ";
    cin>>num1;
    cout<<"\n Enter value of num2: ";
    cin>>num2;
    if(num1>num2)
    {
        cout<<"\n num1 is greater number";
    }
    else if (num2>num1)
    {
        cout<<"\n num2 is greater number";
    }
    
    else
    {
        cout<<"\n Equal number ";
    }

}