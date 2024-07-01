#include<iostream>
using namespace std;
int main()
{
    int rev=0,rem,i,temp,num;
    cout<<"\n Enter the integer : ";
    cin>>num;
    while (temp>0)
    {
        rem = temp % 10;
        rev = rev*10 + 10;
        temp=temp;
        
    }
    if (num == rev)
       cout<<"\n Palindrome";
    else
       cout<<"\n Not Palindrome";
    return 0;
    
    


}