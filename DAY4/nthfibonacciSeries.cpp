#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c, n;
    cout << "Enter the number of terms you want in Fibonacci series: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        c = a + b; // calculate next term.
        a = b;     // assign value of b to a.
        b = c;
    }
    cout << "The " << n << "th term of fibonacci series is:" << c;

    return 0;
}