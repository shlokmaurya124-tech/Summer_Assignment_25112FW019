#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = nums.size();
    int beg = 0, end = n - 1, temp;
    while (beg < end)
    {
        temp = nums[beg];
        nums[beg] = nums[end];
        nums[end] = temp;
        beg++;
        end--;
    }
    cout << "Reversed array : ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}