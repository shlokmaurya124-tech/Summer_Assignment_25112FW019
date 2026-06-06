#include <iostream>
using namespace std;

int main()
{
    int n, rem, count = 0;
    cout << "Enter the number : ";
    cin >> n;
    int ans = 0, pow = 1;
    while (n > 0)
    {
        rem = n % 2;
        ans += rem * pow;
        pow *= 10;
        n /= 2;
    }
    cout <<"Binary of number : " << ans << endl;
    int r;
        while (ans > 0)
    {
        r = ans % 10;
        if (r == 1)
            count++;
            ans/=10;
    }
    cout << "Set bits in number : " << count << endl;
    return 0;
}