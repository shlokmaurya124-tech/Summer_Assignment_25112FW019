#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number you want factors of: ";
    cin >> n;
    cout << "Factors of " << n << " are: " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}