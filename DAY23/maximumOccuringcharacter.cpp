#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[str[i]] > maxFreq)
        {
            maxFreq = freq[str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character : " << maxChar << endl;
    cout << "Frequency = " << maxFreq << endl;

    return 0;
}
