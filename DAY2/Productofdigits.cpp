#include <iostream>
using namespace std;

int main()
{
    int n, r, pro = 1;
    cout << "Enter the nuber you want multiply the digits of : ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        pro *= r;
        n /= 10;
    }
    cout << "The product of digit is: " << pro;
    return 0;
}