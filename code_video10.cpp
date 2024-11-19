#include <iostream>
#include <climits>
using namespace std;

int subarray(int arr[], int size)
{
    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << "starting with " << start << " index"; // for understanding it will be printing index LSO`
        cout << endl;
    }
}

int maximum_subarray_sum(int arr[], int n)
{ // time complexity of =0(n^2);
    int maximumsum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int sum_at_each_index = 0;
        for (int end = start; end < n; end++)
        {
            sum_at_each_index += arr[end];
            maximumsum = max(sum_at_each_index, maximumsum);
        }
    }
    return maximumsum;
}

int kedane_s_algorithm_of_maximum_subarray_sum(int arr[], int n)
{
    int currentsum = 0, maximumsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maximumsum = max(currentsum, maximumsum); // INT_MIN=-infinity
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maximumsum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    subarray(arr, size);
    int array[] = {3, -4, 5, 4, -1, 7, -8};
    int n = 8;
    cout << maximum_subarray_sum(array, n) << endl;
    cout << "kedane^s most optimised approach for maximum subarray sum" << endl;
    cout << kedane_s_algorithm_of_maximum_subarray_sum(array, n);//in this function if all the elements of array are negative then the step two will have to exchange its position with step 3 beacuse in this case anser will be negative
    return 0;
}