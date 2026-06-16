#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 9, 3, 8, 5, 6};
    int n = nums.size();
    int sum = 6;
    int beg = 0, end = n - 1;
    while (beg < end)
    {
        int currSum = nums[beg] + nums[end];
        if (currSum == sum)
        {
            cout << "Pair found : " << nums[beg] << " " << nums[end];
            return 0;
        }
        else if (currSum < sum)
        {
            beg++;
        }
        else
        {
            end--;
        }
    }
    return 0;
}
