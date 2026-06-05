#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, temp;
    cout << "Enter the number you want to check the perfect number of: ";
    cin >> n;
    temp = n;
    if (n < 0)
    {
        cout << " Please enter a positive integer";
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
    }
    if (sum == temp)
    {
        cout << temp << " is a perfect number";
    }
    else
    {
        cout << temp << " is not a perfect number";
    }
    return 0;
}
