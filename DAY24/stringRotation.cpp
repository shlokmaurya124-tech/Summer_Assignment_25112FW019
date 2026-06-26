#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int d;
    cout << "Enter a string : ";
    getline(cin, str);
    cout << "enter the value of d : ";
    cin >> d;
    int n = str.length();
    d = d % 10;
    for (int i = d; i < n; i++)
    {
        cout << str[i];
    }

    for (int i = 0; i < d; i++)
    {
        cout << str[i];
    }
    return 0;
}
