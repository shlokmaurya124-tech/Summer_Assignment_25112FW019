#include <iostream>
using namespace std;

int main()
{
    int num, rem, n;
    int pow = 1, ans = 0;
    cout << "Enter a decimal  number : ";
    cin >> num;
    n = num;

    while (num > 0)
    {
        rem = num % 2;
        ans += rem * pow;
        pow *= 10;
        num /= 2;
    }
    cout << "Binary of decimal number : " << ans << endl;
    return 0;
}