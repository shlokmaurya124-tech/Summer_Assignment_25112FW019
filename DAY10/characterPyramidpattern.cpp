#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows in pattern : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
            ch++;
        }
        ch -= 2; //  doing this we come to B from D in second iteration.
        for (int j = 0; j < i; j++)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
    return 0;
}