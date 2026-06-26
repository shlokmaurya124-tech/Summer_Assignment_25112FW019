#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    vector<string> words;
    string word = "";

    // Separate words by making it a vector elements.
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            word = word + str[i];
        }
        else
        {
            words.push_back(word);
            word = "";
        }
    }
    words.push_back(word); // Store the last word

    for (int i = 0; i < words.size() - 1; i++) // Bubble Sort according to word length
    {
        for (int j = 0; j < words.size() - i - 1; j++)
        {
            if (words[j].length() > words[j + 1].length())
            {
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }

    cout << "Words sorted by length:\n";

    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << " ";
    }

    return 0;
}