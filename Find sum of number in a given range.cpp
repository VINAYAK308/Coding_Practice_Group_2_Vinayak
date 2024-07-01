#include<iostream>
using namespace std;
int main()
{
   int i,num1,num2,sum=0;
   cout<<("\n Enter the value of num1: ");
   cin>>num1;
   cout<<("\n Enter the value of num2: ");
   cin>>num2;
   for(i=num1;i<=num2;i++)
   {
        sum=sum+i;
            
   }

   cout<<(" sum of number in a given range: ")<<sum;
   return 0;
   
   

}