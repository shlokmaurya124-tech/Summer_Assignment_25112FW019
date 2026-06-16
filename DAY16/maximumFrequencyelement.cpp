#include <iostream>
#include <vector>
using namespace std;

int maxFreqElement(vector<int> nums)
{
    int n = nums.size();
    int count = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 4, 2, 2, 2, 3, 5};
    int n = nums.size();
    maxFreqElement(nums);
    cout << "Maximum frequency elements is: " << maxFreqElement(nums);
    return 0;
}
