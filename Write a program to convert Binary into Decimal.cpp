#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int temp,i=0,num,rem,dec=0;
    cout<<"\n Enter Binary Number: ";
    cin>>num;
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        dec=dec+rem*pow(2,i);
        i++;
        temp=temp/10;
    }
    cout<<"\n Conversion of entered Binary number into decimal : "<<dec;
    return 0;
}