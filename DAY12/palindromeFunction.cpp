#include <iostream>
using namespace std;

void palindrome(int n)
{
    int original = n;
    int reversed = 0;
    
    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    
    if (original == reversed){
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not palindrome" << endl;
}
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    palindrome(num);
    return 0;
}