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
    int key;
    cout << "Enter the key element: ";
    cin >> key;

    int loc;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            loc = i;
            break;
        }
    }
    cout << " Key found at the address of: " << loc << endl;
    
    return 0;
}