#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number you want check the prime of: ";
    cin >> n;

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not a prime number";
    }
    return 0;
}
