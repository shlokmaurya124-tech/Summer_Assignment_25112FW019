#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        int freq = 1;

        if (str[i] == ' ')
            continue;

        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                freq++;
                str[j] = '*';
            }
        }
        if (str[i] != '*')

            cout << str[i] << " = " << freq << endl;
    }

    return 0;
}