#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        ma = max(ma, A[i]);
    }
    vector<int> freq(ma + 1, 0);
        
    for (int i = 0; i < n; i++)
    {
        freq[A[i]]++; // 
    }
    for (int i = 0; i <= ma; i++)
    {
        if (freq[i] != 0)
        {
            cout << i << " -> " << freq[i] << endl;
        }
    }
    return 0;
}