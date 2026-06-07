#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n==1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int num;
    cout << "Enter the length of fibonacci series: ";
    cin >> num;
    cout << "Fibonacci series : ";
    for( int i=0; i<num; i++) {
    cout << fib(i) << " " ;
    }
    cout << endl;
    return 0;
}
