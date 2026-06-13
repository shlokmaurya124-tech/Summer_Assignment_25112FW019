#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 6, 7, 8, 9, 5, 4};
    int n = 9;
    int countEven = 0;
    int countOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout << "Even count: " << countEven << endl;
    cout << "Odd count: " << countOdd << endl;
    return 0;
}