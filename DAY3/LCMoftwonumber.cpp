#include <iostream>
using namespace std;

int main()
{
    int a, b, maxNum;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    maxNum = max(a, b);  // to find the maximum number among a and b.

    while (true) // infinite loop , when we don't know how many times loop runs.
    {
        if (maxNum % a == 0 && maxNum % b == 0)
        {
            break;  // to come out from the loop when condition satisfied.
        }
        maxNum++;
    }

    cout << "LCM of " << a << " and " << b << " is:" << maxNum;
    return 0;
}
