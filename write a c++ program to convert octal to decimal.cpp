#include<iostream>

#include<math.h>
using namespace std;


int getOctal(long long num)
{
    int i = 0, decimal = 0;
    

    int base = 8;
    

    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(base, i);

        num /= 10;
        i++;
    }
    return decimal;
}

// main program
int main()
{   int a;
    cout<<"\n Enter a Octal Number : ";
    cin>>a;
    
    long long octal = a;
    
    cout << getOctal(octal);   
    
    return 0;
}
