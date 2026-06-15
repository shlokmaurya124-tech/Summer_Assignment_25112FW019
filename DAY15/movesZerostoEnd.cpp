#include <iostream>
using namespace std;

int main()
{
    int nums[] = {0, 2, 0, 4, 0, 6, 0, 8};
    int n = 8;
    int pos = 0, temp;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[pos];
            nums[pos] = nums[i];
            nums[i] = temp;
            pos++;
        }
    }
    cout << "Array after moving all zeros to end: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}