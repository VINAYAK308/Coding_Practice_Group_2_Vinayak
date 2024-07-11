


#include <iostream>
using namespace std;

int main() {
    // Take input from the user
    double bill_amount;
    cout << "Enter the bill amount: ";
    cin >> bill_amount;

    double tip_percentage;
    cout << "Enter the tip percentage (e.g., 12 for 12%): ";
    cin >> tip_percentage;

    // Calculate the tip amount
    double tip_amount = (bill_amount * tip_percentage) / 100;

    // Calculate the total amount
    double total_amount = bill_amount + tip_amount;

    // Display the results
    cout << "Bill Amount: $" << bill_amount << endl;
    cout << "Tip Percentage: " << tip_percentage << "%" << endl;
    cout << "Tip Amount: $" << tip_amount << endl;
    cout << "Total Amount: $" << total_amount << endl;

    return 0;
}
