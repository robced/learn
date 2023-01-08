#include "iostream"

using namespace std;

void showMenu() {
    cout << "**************** MENU ****************" << endl;
    cout << "1. Check Balance." << endl;
    cout << "2. Deposit Money." << endl;
    cout << "3. Withdraw Money." << endl;
    cout << "4. Exit." << endl;
    cout << "**************************************" << endl;
}

int main() {
    int userOption = 0;
    double userBalance = 500.0;


    do {
        showMenu();
        cout << "Please choose an option: ";
        cin >> userOption;
        system("cls");
        switch (userOption) {
            case 1: {
                cout << "Balance is: " << userBalance << " $" << endl;
                break;
            }
            case 2: {
                cout << "Deposit amount: ";
                double userDepositAmount = 0.0;
                cin >> userDepositAmount;
                userBalance += userDepositAmount;
                break;
            }
            case 3: {
                cout << "Withdrawal amount: ";
                double userWithdrawalAmount = 0.0;
                cin >> userWithdrawalAmount;

                if (userWithdrawalAmount >= userBalance) {
                    userBalance -= userWithdrawalAmount;
                } else {
                    cout << "You do not have enough money." << endl;
                }
            }
                break;
            default: {
                cout << "Please choose one of the options above.";
            }
        }
    } while (userOption != 4);

    return 0;
}