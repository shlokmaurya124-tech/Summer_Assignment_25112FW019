#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 5, 7, 8, 9, 3};
    int n = 6;
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "maximum = " << max << endl;
    cout << "minimum = " << min << endl;
    return 0;
}