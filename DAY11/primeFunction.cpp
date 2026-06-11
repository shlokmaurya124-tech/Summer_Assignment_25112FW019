#include <iostream>
using namespace std;

void primeNum(int n)
{
    if (n <= 1)
    {
        cout << "Not prime" << endl;
        return;
    }

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
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    primeNum(num);
    return 0;
}