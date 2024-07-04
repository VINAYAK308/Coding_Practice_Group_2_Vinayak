#include<iostream>
using namespace std;

int main()
{
    int a,b,c,x,y,z;
    cout<<"\n Enter First number: ";
    cin>>a;
    cout<<"\n Enter second number: ";
    cin>>b;
    cout<<"\n Enter Third number: ";
    cin>>c;
    
    x=a*a;
    y=b*b;
    z=c*c;
    
    if(x + y == z || z + y == x || x + z == y)
    {
        cout<<"\n Given Number is  Pythagorean Triplet.";
    }
    else
    {
        cout<<"\n Given Number is not Pythagorean Triplet.";
    }

}