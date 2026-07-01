#include <iostream>
using namespace std;

int main()
{
    int n, r, rev = 0;
    cout << "Enter the number you want reverse of: ";
    cin >> n;
    if( n == 0 ) {
        cout  << "Reverse number : " << 0 << endl;
        return 0;
    }
    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    cout << " The reverse of the number is: " << rev;
    return 0;
}
