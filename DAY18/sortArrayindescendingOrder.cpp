#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {22, 44, 33, 78, 98, 56};
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] > nums[maxIdx])
            {
                maxIdx = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[maxIdx];
        nums[maxIdx] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
