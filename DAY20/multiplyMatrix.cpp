#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2, r3, c3;
    cout << "Enter rows and columns of first matrix: " << endl;
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: " << endl;
    cin >> r2 >> c2;
    int A[100][100], B[100][100], C[100][100];

    cout << "Elements of first matrix:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Elements of second matrix:" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][j] * B[i][j];
            }
        }
    }

    cout << "Matrix multiplication : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}