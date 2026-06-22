#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            count++;
        }
    }
    cout << "Count in a sentence: " << count;
    return 0;
}
