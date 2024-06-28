#include<iostream>
using namespace std;
int main()
{
    int N,i,sum=0;
    cout<<"\n Enter the value of nth term: ";
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cout<<i;
        sum+=i;
    }
    cout<<"\n Sum of "<<N<<" Natural Number: "<<sum;
}