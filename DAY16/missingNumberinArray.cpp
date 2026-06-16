#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 4, 5, 6};
    int n = nums.size();
    int size = 5;
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }
    for (int i = 0; i < size; i++)
    {
        xor2 ^= nums[i];
    }
    int missing = xor1 ^ xor2;
    cout << "missing Number is : " << missing;
    return 0;
}
