/*#include <iostream>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed_number;

  return 0;
}*/
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