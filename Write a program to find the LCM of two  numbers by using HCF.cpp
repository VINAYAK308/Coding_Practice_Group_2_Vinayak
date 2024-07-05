#include<iostream>
#include <cstdlib>
using namespace std;
int main() {
    int num1, num2;

    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;


    int a = num1;
    int b = num2;

    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int hcf = a;

    // Calculate the LCM using the relationship between HCF and LCM
    int lcm = abs(num1 * num2) / hcf;

    cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}