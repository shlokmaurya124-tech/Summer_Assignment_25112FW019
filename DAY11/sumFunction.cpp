#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Sum = " << sum(a, b);
    return 0;
}