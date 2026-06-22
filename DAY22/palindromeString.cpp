#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    string rev = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        rev.push_back(str[i]);
    }

    if (rev == str)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}