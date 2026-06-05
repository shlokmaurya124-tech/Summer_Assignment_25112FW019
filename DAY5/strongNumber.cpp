#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, temp, r, fact = 1;
    cout << "Enter the number you want to check the strong number of: ";
    cin >> n;
    temp = n;
    if (n < 0)
    {
        cout << "Please enter the positive integer";
    }
    else
    {
        while (n > 0)
        {
            r = n % 10;

            for (int i = 1; i <= r; i++)
            {
                fact *= i;
            }

            sum += fact;
            fact = 1;
            n /= 10;
        }
    }
    if (sum == temp)
    {
        cout << temp << " is a strong number";
    }
    else
    {
        cout << temp << " is not a strong number";
    }
    return 0;
}
