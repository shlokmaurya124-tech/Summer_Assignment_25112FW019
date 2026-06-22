#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
            ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
            ch == 'u' || ch == 'U')
        {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;

    return 0;
}