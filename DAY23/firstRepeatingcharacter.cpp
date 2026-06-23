#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int freq = 0;
    char firstRep;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                freq++;
                firstRep = str[j];
            }
        }
    }
    cout << "First repeating character is : " << firstRep << endl;
    return 0;
}