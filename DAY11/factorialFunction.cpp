#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Factorial = " << fac(num);
    return 0;
}
