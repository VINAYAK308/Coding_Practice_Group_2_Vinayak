#include<iostream>
using namespace std;
int main()
{
    int i,num,j;
    cout<<"\n Enter a number upto which you want print cube of a number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {  
        j=i*i*i;
        cout<<"\n Cube of "<<i<<" = "<<j;
       
    }
    return 0;
}