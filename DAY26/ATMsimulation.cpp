#include <iostream>
using namespace std;

int main()
{
    cout << "===== ATM Menu =====\n";
    int option;
    float balance = 100000, deposit, withdraw;
    while (true)
    {
        cout << "1. Check available balance :\n";
        cout << "2. Deposit Money:\n";
        cout << "3. Withdraw Money:\n";
        cout << "4. Exit:\n";

        cout << "Enter your option:";
        cin >> option;

        if (option == 1)
        {
            cout << "Your available balance:" << balance << endl;
        }
        else if (option == 2)
        {
            cout << "Enter amount to deposit:";
            cin >> deposit;
            balance += deposit;
            cout << "Your amount deposited successfully!:\n";
            cout << "Updated balance:" << balance << endl;
        }
        else if (option == 3)
        {
            cout << "Enter amount to  withdraw:";
            cin >> withdraw;
            if (balance >= withdraw)
            {
                balance -= withdraw;
                cout << "Remaining balance:" << balance << endl;
            }
            else
            {
                cout << "Insufficient money:\n";
            }
        }

        else if (option == 4)
        {
            cout << "Thankyou! for using ATM\n";
            break;
        }
        else
        {
            cout << "Invalid option.";
        }
    }

    return 0;
}