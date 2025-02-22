#include <iostream>
using namespace std;

int main() {
    int cheque, income, expense;
    string exiting = "", choice;

    cout << "Welcome to your cheque account" << endl;
    cout << "----------------" << endl;

    cout << "Enter current cheque balance: R";
    cin >> cheque;

    if (cheque < 0) {
        cout << "Initial balance is negative. Exiting..." << endl;
        return 0;
    }

    while (exiting != "no") {
        cout << "Add income or expense? ";
        cin >> choice;

        if (choice == "income") {
           
            do {
                cout << "Deposit amount (positive): R";
                cin >> income;
            } while (income < 0);

            cheque += income;
            cout << "New balance: R" << cheque << endl;

            if (cheque < 0) {
                cout << "Overdraft detected. Exiting..." << endl;
                return 0;
            }
        }
        else if (choice == "expense") {
            
            do {
                cout << "Withdraw amount (positive): R";
                cin >> expense;
            } while (expense < 0);

            cheque -= expense;
            cout << "New balance: R" << cheque << endl;
         
            if (cheque < 0) {
                cout << "Overdraft detected. Exiting..." << endl;
                return 0;
            }
        }
        else {
            cout << "Invalid choice. Try again." << endl;
        }
        cout << "Continue (yes/no)? ";
        cin >> exiting;
    }
    if (cheque < 0) {
        cout << "You ended in overdraft. Pay your debt!" << endl;
    }

    return 0;
}
