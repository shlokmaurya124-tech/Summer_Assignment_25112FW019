#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8};
    int n = 7;
    int d = 3;
    int temp[d];

    // store d elements in temp[].
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    // store other elements in the array.
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    // store temp elements in the array.
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;     
}