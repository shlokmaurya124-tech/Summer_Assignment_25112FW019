#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 7, 8};
    int n = 5;
    int key = 3, loc = -1;
    int beg = 0, end = n - 1;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (arr[mid] == key)
        {
            loc = mid;
            cout << "The key is found at index: " << loc << endl;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    if (loc == -1)
    {
        cout << "key is not found ";
    }
    return 0;
}
