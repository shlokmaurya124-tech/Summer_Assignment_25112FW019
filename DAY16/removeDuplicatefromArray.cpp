#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 3, 3, 5, 6};
    int n = arr.size();
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    for (int i = 0; i <= j; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}