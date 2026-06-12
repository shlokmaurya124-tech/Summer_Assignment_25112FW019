#include <iostream>
using namespace std;

void armstrongNum(int n)
{
    int sum = 0, count = 0, r;
    int temp = n;
    if (n <= 0)
    {
        cout << "Not a Armstrong number" << endl;
    }
    int t = n;
    while (t != 0)
    {
        t /= 10;
        count++;
    }
    while (n > 0)
    {
        int pow = 1;
        r = n % 10;
        for (int i = 0; i < count; i++)
            pow *= r;
            sum += pow;
            n /= 10;
    }
    if (temp == sum)
    {
        cout << "Armstrong number "  << endl;
    }
    else
    {
        cout << "Not a Armstrong number" << endl;
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    armstrongNum(num);
    return 0;
}