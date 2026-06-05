#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number you want to find the largest prime factor of: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "There is no largest prime factor for " << n << ".";
        return 0;
    }

    int maxPrime = 0;

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            maxPrime = i;
            n /= i;
        }
    }

    if (n > 1)
    {
        maxPrime = n;
    }

    cout << maxPrime << " is the largest prime factor.";
    return 0;
}
