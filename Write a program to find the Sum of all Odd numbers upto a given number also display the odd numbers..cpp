#include<iostream>
using namespace std;
int main()
{
    int num,i,j,sum=0;
    cout<<"\n Enter a number upto which you to print a sum of odd number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(num%2==1)
        {
          sum+=i;
          cout<<i<<",";
        }
    }
    cout<<"\n Sum of odd number is: "<<sum;
    return 0;
}