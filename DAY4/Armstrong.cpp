#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number you want to check for Armstrong number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Negative numbers cannot be Armstrong numbers.";
        return 0;
    }

    int sum = 0, count = 0, temp = n;
    int t = n;

    while (t != 0)
    {
        t /= 10;
        count++;
    }
    if (count == 0)
        count = 1;
    while (n > 0)
    {
        int r = n % 10;
        int power = 1;
        for (int i = 0; i < count; ++i) // calulate r^count.
            power *= r;
        sum += power;
        n /= 10;
    }
    if (temp == sum)
        cout << "The number " << temp << " is an Armstrong number.";
    else
        cout << "The number " << temp << " is not an Armstrong number.";
    return 0;
}