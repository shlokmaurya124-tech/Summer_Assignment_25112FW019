#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;
    int countVowels = 0;
    int countConsonants = 0;

    cout << "Enter a string: " << endl;
    cin.getline(str, 100);

    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            countVowels++;
        }
        else
        {
            countConsonants++;
        }
    }
    cout << "Count of vowels : " << countVowels << endl;
    cout << "Count of consonants : " << countConsonants << endl;
    return 0;
}
