#include<iostream>
using namespace std;
int main()
{    
    int i,n,j,k;
    cout<<"\n Enter a number upto which you want to print square & cube of number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        j=i*i;
        cout<<"\n Square of "<<i<<" is : "<<j;
    }
    cout<<"\n";
    for(i=1;i<=n;i++)
    {
        k=i*i*i;
        cout<<"\n Cube of "<<i<<" is : "<<k;
    }
    return 0;
}