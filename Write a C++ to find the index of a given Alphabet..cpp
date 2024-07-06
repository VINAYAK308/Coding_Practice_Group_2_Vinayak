#include <iostream>
using namespace std;

int getAlphabetIndex(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A';
    } else if (ch >= 'a' && ch <= 'z') {
        return ch - 'a';
    } else {
        return -1; // Indicating the character is not a valid alphabet
    }
}

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    int index = getAlphabetIndex(ch);

    if (index != -1) {
        cout << "The index of the alphabet '" << ch << "' is: " << index << endl;
    } else {
        cout << "The character entered is not a valid alphabet." << endl;
    }

    return 0;
}
