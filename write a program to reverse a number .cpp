
#include<iostream>
using namespace std;
int main()
{ int n,rev=0 , rem;
  cout<<"\n Enter the integer: ";
  cin>>n;
  while(n!=0)
  { rem = n % 10;
    rev = rev*10 + rem;
    n=n/10;
  }
  cout<<"\n Reverse Number = "<<rev;
}
