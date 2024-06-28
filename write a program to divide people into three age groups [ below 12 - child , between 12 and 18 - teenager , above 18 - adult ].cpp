#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"\n Enter the age of the person : ";
    cin>>age;
    if(age<=12){
        cout<<"\n child ";
    }
    else if (age<18)
    {
       cout<<"\n teenager";
    }
    else
    {
        cout<<"\n adult";
    }
    
}