#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length())
    {
        cout << "Not Anagram";
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
    {
        freq[str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        freq[str2[i]]--;
    }

    bool anagram = true;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Strings are Anagram";
    else
        cout << "Strings are Not Anagram";

    return 0;
}