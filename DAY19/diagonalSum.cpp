#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n for square matrix: ";
    cin >> n;
    int A[100][100];
    cout << "enter the elements of square matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int diagonalSum = 0;
    for (int i = 0; i < n; i++)
    {
        diagonalSum += A[i][i];
    }

    cout << "Diagonal sum = " << diagonalSum << endl;
    return 0;
}
