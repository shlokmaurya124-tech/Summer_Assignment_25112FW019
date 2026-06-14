#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "nums[" << i << "]: ";
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (nums[i] == nums[j])
            {
                cout << nums[i] << endl;
                break;
            }
        }
    }
    return 0;
}