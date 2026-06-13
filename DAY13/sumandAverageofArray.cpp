#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    int sum = 0;
    int avg = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float  avgArray(int arr[], int n)
{
    float avg = 0;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = float(sum) / n;
    return avg;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 8, 9, 6, 3};
    int n = 8;
    cout << "sum= " << sumArray(arr, n) << endl;
    cout << "average= " << avgArray(arr, n) << endl;
    return 0;
}