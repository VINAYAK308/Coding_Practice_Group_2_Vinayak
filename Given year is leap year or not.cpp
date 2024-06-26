#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"\n Enter a year: ";
    cin>>year;
    if(year%400==0)
    {
        cout<<"\n Given Year is Leap Year";
    }
    else if (year%4==0 && year%100!=0)
    {
         cout<<"\n Given Year is Leap Year";
    }
    else
    {
       cout<<"\n Given Year is  not Leap Year"; 
    }

    
}