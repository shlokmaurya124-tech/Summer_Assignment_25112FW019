#include <iostream>
using namespace std;

void reverseNumber(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n % 10;
    reverseNumber(n / 10);
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    reverseNumber(num);
    return 0;
}