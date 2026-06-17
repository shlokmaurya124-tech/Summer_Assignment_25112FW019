#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[] = {1, 6, 4, 3, 9};
    int arr2[] = {1, 4, 8, 5, 6, 2};
    int n1 = 5, n2 = 6;
    cout << "common Elements are: ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }

    return 0;
}