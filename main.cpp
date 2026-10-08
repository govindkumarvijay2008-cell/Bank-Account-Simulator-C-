#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

int main() {
    double balance = 0.0;
    int choice = 0;
    cout << fixed << setprecision(2);
    cout << "Bank Account Simulator\nCreated by Govind Kumar Vijay\n";
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check balance\n0. Exit\nChoice: ";
        if (!(cin >> choice)) { cerr << "Please enter a number.\n"; return 1; }
        if (choice == 1 || choice == 2) {
            double amount;
            cout << "Amount: ";
            if (!(cin >> amount)) { cerr << "Please enter a valid amount.\n"; return 1; }
            if (amount <= 0) cout << "Amount must be greater than zero.\n";
            else if (choice == 1) { balance += amount; cout << "Deposit complete.\n"; }
            else if (amount > balance) cout << "Insufficient funds.\n";
            else { balance -= amount; cout << "Withdrawal complete.\n"; }
        } else if (choice == 3) cout << "Current balance: Rs. " << balance << '\n';
        else if (choice != 0) cout << "Invalid menu choice.\n";
    } while (choice != 0);
    cout << "Final balance: Rs. " << balance << '\n';
}
