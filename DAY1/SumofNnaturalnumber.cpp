#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the value of n :";
    cin >> n;
    if (n <= 0)
    {
        cout << "Not a natural number";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of first " << n << " natural number is : " << sum;
    return 0;
}