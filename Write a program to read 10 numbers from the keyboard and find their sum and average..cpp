#include<iostream>
using namespace std;
int main()
{
    int sum=0,num[10];
    double avg=0;
    cout<<"\n Enter 10 number: "<<endl;

    for (int i = 0; i < 10; i++)
    {
        cin>>num[i];
    }
    
    for(int i = 0; i < 10; i++)
    {
     
        sum+=num[i];
    }
    avg = sum / 10.0;
    cout<<"\n Sum: "<<sum;
    cout<<"\n Average: "<<avg;

    return 0;
}
