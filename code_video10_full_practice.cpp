#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int subarray(int arr[], int n)
{
    int maximumnum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currentsum = 0;
        for (int end = start; end < n; end++)
        {
            currentsum += arr[end];
            maximumnum = max(currentsum, maximumnum);
        }
    }
    return maximumnum;
}

int kedane_algorithm(int arr[], int n)
{
    int maximumnum = INT_MIN, currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maximumnum = max(currentsum, maximumnum);
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maximumnum;
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = 5;
    // subarray(arr, n);
    // int arr[] = {3, -4, 5, 4, -1, 7, -8};
    // int n = 8;
    // subarray(arr, n);
    // cout << kedane_algorithm(arr, n);
    int arr1[] = {2, 7, 11, 15};
    int n = 5;
    int target = 9;
    for (int i = 0 : twosum(arr1, n, target))
    {
        cout << i;
    }
    return 0;
}