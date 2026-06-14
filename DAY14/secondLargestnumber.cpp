#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    int firstMax = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (firstMax < arr[i])
        {
            firstMax = arr[i];
        }
    }
    int secondMax = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (secondMax < arr[i] && arr[i] != firstMax)
        {
            secondMax = arr[i];
        }
    }
    cout << "firstMax = " << firstMax << endl;
    cout << "secondMax = " << secondMax << endl;
    return 0;
}
