#include <iostream>
using namespace std;

void perfectNum(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << "Perfect number";
    }
    else
    {
        cout << "Not a perfect number";
    }
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    perfectNum(num);
    return 0;
}