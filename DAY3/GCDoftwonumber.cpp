#include <iostream>
using namespace std;

int main()
{
    int a, b, hcf, min;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    if (b > a)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    cout << " HCF of " << a << " and " << b << " is:" << hcf;
    return 0;
}