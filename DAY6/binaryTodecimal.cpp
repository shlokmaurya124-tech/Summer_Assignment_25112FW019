#include <iostream>
using namespace std;

int main()
{
    int n, rem, pow = 1, ans = 0;
    cout << " Binary number = ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        ans += rem * pow;
        n /= 10;
        pow *= 2;
    }
    cout << " Decimal number = " << ans << endl;
    return 0;
}