#include <iostream>
using namespace std;

int main()
{
    int lower, upper, count = 0;
    cout << "Enter the Lower limit:";
    cin >> lower;
    cout << "Enter the Upper limit:";
    cin >> upper;
    cout << "Prime numbers between " << lower << " and " << upper << " are: " << endl;
    for (int i = lower; i <= upper; i++)
    {
        bool isPrime = true;
        if (i <= 1)
        {
            isPrime = false;
        }
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false; //
                break;
            }
        }
    
    if(isPrime)
    { //
        count++;
    }
}
    cout << count << endl;
    return 0;
}