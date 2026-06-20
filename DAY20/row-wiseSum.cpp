#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of rows and column of matrix: " << endl;
    cin >> r >> c;
    int A[r][c];
    cout << "The elements of matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Row-wise sum: " << endl;
    int rowSum;
    for (int i = 0; i < r; i++)
    {
        rowSum = 0;
        for (int j = 0; j < c; j++)
        {
            rowSum += A[i][j];
        }
        cout << "row " << i + 1 << " = " << rowSum << endl;
    }
    return 0;
}