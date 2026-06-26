#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "programming";
    string result = "";

    for (char ch : s)
    {
        bool found = false; 

        for (char r : result)
        {
            if (r == ch)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            result += ch;
        }
    }

    cout << result << endl; // progamin
    return 0;
}