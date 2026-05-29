#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0;
    cout << "Enter the number you want sum of: ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        sum += r;
        n /= 10;
    }
    cout << "The sum of digits of number " << n << " is: " << sum;
}