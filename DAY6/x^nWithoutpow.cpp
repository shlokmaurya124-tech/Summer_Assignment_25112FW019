#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the power of that number : ";
    cin >> p;
    int ans = 0;
    while (p > 0)
    {
        ans += n * n;
        p--;
    }
    cout << ans << endl;
    return 0;
}