#include <iostream>
using namespace std;

int main()
{
    int lower, upper;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << " Enter the upper limit: ";
    cin >> upper;
    cout << "Armstrong number between " << lower << " and " << upper << "are: " << endl;
    for (int i = lower; i <= upper; i++)
    {
        int n = i, sum = 0, count = 0, r, temp;
        while (n != 0)
        {
            n /= 10;
            count++;
        }
        n = i;
        temp = n;
        while (n > 0)
        {
            r = n % 10;
            int power = 1;
            for (int j = 0; j < count; j++)
            {
                power *= r;
            }
            sum += power;
            n /= 10;
        }

        if (i == sum)
        {
            cout << i << " ";
        }
    }
    return 0;
}
