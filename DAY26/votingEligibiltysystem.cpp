#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "****** Voting Eligibility System *******\n";

    cout << "Enter your age : ";
    cin >> age;

    if (age < 0)
    {
        cout << "Invalid age:";
    }

    if (age >= 18)
    {
        cout << "Congratulation! You are eligible for voting.";
    }
    else
    {
        cout << "Sorry! You are not eligible for voting.";
    }

    return 0;
}