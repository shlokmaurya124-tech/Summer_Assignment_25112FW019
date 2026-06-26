#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter a 1st string : ";
    getline(cin, str1);
    cout << "Enter a 2nd string : ";
    getline(cin, str2);

    int n1 = str1.length();
    int n2 = str2.length();

    cout << "Common chracter : ";

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (str1[i] == str2[i])
            {
                cout << str1[i];
                break;
            }
        }
    }

    return 0;
}