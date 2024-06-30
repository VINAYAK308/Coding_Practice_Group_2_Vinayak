#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter numbers (enter -1 to stop):" << endl;

    while (true) {
        cin >> number;

        if (number == -1) {
            break;
        }

        cout << "You entered: " << number << endl;
    }

    cout << "Program terminated because -1 was entered." << endl;

    return 0;
}
