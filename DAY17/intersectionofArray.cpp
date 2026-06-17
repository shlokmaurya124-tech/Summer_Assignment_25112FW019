#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 7, 9, 5, 4};
    int arr2[]= {1, 2, 8, 6, 10};
    int n1 = 6, n2 = 5;
    cout << "Intersection eelments are: " << endl; 

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j] << " ";
            }

        }
    }
    return 0;
}
