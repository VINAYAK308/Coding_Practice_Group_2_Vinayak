#include <iostream>
using namespace std;

// Function to compute the HCF (GCD) using Euclidean algorithm
int computeHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute the LCM
int computeLCM(int a, int b, int hcf) {
    return (a * b) / hcf;
}

int main() {
    int num1, num2;

    // Taking input from user
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Compute HCF
    int hcf = computeHCF(num1, num2);

    // Compute LCM
    int lcm = computeLCM(num1, num2, hcf);

    // Output the results
    cout << "HCF: " << hcf << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}
