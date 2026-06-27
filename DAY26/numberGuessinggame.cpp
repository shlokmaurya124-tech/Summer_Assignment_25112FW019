#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess;

    // Generate random number between 1 to 100.
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "******Number Guessing Game******\n";
    cout << "Enter a number between 1 to 100" << endl;

    while (true)
    {
        cout << "Enter your guessing number : ";
        cin >> guess;

        if (guess == number)
        {
            cout << "Congratulation! Your guess is correct." << endl;
            break;
        }
        else if (guess < number)
        {
            cout << "To low! Try Again." << endl;
        }
        else
        {
            cout << "To high! Try Again." << endl;
        }
    }

    return 0;
}
