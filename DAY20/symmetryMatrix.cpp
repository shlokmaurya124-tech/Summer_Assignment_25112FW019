#include <iostream>
using namespace std;

int main()
{
    int r, c, i;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> r >> c;
    int A[r][c];
    cout << "Enter the elements of matrix: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    if (r != c)
    {
        cout << "Transpose of this matrix is not possible" << endl;
    }

    bool symmetry = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (A[j][i] !=A[i][j])
            {
                symmetry = false;
                break;
            }
        }
    }

    if (symmetry)
    {
        cout << "Symmetric matrix : ";
    }
    else
    {
        cout << "Not a symmetric matrix:";
    }
    return 0;
}