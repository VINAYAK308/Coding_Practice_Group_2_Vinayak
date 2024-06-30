
#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, term = 0, n;

    cout << "Enter the length of Fibonacci Series: ";
    cin >> n;

    
    cout << "Fibonacci Series: " << a << ", " << b << ", ";

    term = a + b;
    
    while(n!=2) {
        cout << term << ", ";
        a = b;
        b = term;
        term = a + b;
        n--;
    }
    return 0;
}
