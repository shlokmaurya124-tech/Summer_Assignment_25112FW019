#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of rows and column: ";
    cin >> r >> c;
    int A[r][c];
    cout << "Elements of matrix are:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    int sumColumn;
    for (int j = 0; j < c; j++)
    {
        sumColumn = 0;
        for (int i = 0; i < r; i++)
        {
            sumColumn += A[i][j];
        }
        cout << "columnSum  " << j + 1 << " = " << sumColumn << endl;
    }
    return 0;
}