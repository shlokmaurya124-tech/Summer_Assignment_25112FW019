#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of 1st array: ";
    cin >> n1;

    int A[n1];

    cout << "Enter elements of 1st sorted array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }

    cout << "Enter size of 2nd array: ";
    cin >> n2;

    int B[n2];

    cout << "Enter elements of 2nd sorted array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> B[i];
    }

    int C[n1 + n2];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
        }
        else
        {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        C[k] = A[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        C[k] = B[j];
        j++;
        k++;
    }

    cout << "Merged array: ";

    for (int i = 0; i < n1 + n2; i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}