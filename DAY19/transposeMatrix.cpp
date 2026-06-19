#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int A[100][100], transposeMat[100][100];
    cout << "Elements of matrix : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    //  find transpose.
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transposeMat[j][i] = A[i][j];
        }
    }
    cout << " Transpose  matrix : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << transposeMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}