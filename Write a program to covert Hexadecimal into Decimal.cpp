#include<iostream>
#include<math.h>
using namespace std;


int getHexa(long long num)
{
    int i = 0, decimal = 0;
    

    int base = 16;
    

    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(base, i);

        num /= 10;
        i++;
    }
    return decimal;
}
int main()
{   int a;
    cout<<"\n Enter a Hexadecimal Number : ";
    cin>>a;
    
    long long Hexa = a;
    
    cout << getHexa(Hexa);   
    
    return 0;
}
