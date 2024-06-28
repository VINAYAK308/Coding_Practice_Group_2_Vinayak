#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"/n Enter the Number : ";
    cin>>num;
    if(num%3==0 && num%5==0)
    {
        cout<<"\n"<<num<<" is divisible by both 3 and 5.";
    }
    else
    {
        cout<<"\n"<<num<<" is not divisible by both 3 and 5 ";

    }

}