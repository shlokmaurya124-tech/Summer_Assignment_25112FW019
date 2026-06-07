#include <iostream>
using namespace std;

int sumDigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + sumDigit(n /= 10);
    }
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Sum of digits of number : " << sumDigit(num) << endl;
    return 0;
}