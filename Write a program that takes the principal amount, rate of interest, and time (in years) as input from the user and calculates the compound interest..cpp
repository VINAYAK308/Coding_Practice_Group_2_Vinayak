#include <iostream>
#include <cmath> // for the pow function

using namespace std;

int main() {
    // Variable declarations
    double principal, rate, time, compoundInterest;
    int numberOfCompounds;

    // Taking inputs from the user
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;

    cout << "Enter the time (in years): ";
    cin >> time;

    cout << "Enter the number of times interest is compounded per year: ";
    cin >> numberOfCompounds;

    // Convert rate from percentage to a decimal
    rate = rate / 100;

    // Calculate compound interest using the formula A = P * (1 + r/n)^(n*t)
    double amount = principal * pow((1 + rate / numberOfCompounds), numberOfCompounds * time);
    compoundInterest = amount - principal;


    cout << "The compound interest is: " << compoundInterest << endl;


    return 0;
}
