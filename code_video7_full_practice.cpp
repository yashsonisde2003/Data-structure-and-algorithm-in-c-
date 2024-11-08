#include <iostream>
#include <climits>
using namespace std;

int reversing_an_array(int arr[], int size) // two pointeer approach
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int linear_search(int arr[], int size, int search)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            return i; // return is being used here beacuse after return nothing is executed
        }
    }
}

int smallest_in_array(int arr[], int size)
{
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minimum) // this can also be replaced with num=min(arr[i],num)
        {
            minimum = arr[i];
        }
    }
    cout << minimum;
}
int largest_in_array(int arr[], int size)
{
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout << maximum;
}

// homework problems

int sum_of_array_and_product(int arr[], int size)
{
    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    cout << product;
}

int swap_of_minimum_and_max(int arr[], int size)
{
    int maximum = INT_MIN; // must be opposite
    int minimum = INT_MAX;
    int index_of_maximum = 0;
    int index_of_minimum = 0;
    for (int i = 0; i < size; i++)
    {
        minimum = min(arr[i], minimum);
        maximum = max(arr[i], maximum);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == minimum)
        {
            index_of_minimum = i;
        }
        else if (arr[i] == maximum)
        {
            index_of_maximum = i;
        }
    }
    cout << index_of_minimum << endl;
    cout << index_of_maximum << endl;
    swap(arr[index_of_minimum], arr[index_of_maximum]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int intersection_of_two_arrays(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << ",";
            }
        }
    }
}


int unique_number_finder(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isunique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isunique = false;
                break;
            }
        }
        if (isunique)
        {
            cout << arr[i] << ",";
        }
    }
    cout << endl;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 5, 3, 2, 1, 8};
    int size = 11;
    unique_number_finder(arr, size);
    // int arr[] = {4, 2, 3, 44, 5, 6, 7, 8, 9};
    // int size = 9;
    // // reversing_an_array(arr, size);
    // // for (int i = 0; i < size; i++)
    // // {
    // //     cout << arr[i] << endl;
    // // }
    // // int searched_element = 7;
    // // cout << "This is the index of searched element:- " << linear_search(arr, size, searched_element);
    // // cout << endl;
    // smallest_in_array(arr, size);
    // cout << endl;
    // largest_in_array(arr, size);
    // cout << endl;
    // sum_of_array_and_product(arr, size);
    // cout << endl;
    // swap_of_minimum_and_max(arr, size);
    // int arr1[] = {1, 2, 3, 4, 5, 6, 1, 2, 3}, arr2[] = {2, 3, 1, 5};
    // int size1 = 6, size2 = 4;
    // intersection_of_two_arrays(arr1, arr2, size1, size2);
    // unique_values_finder(arr1, size1);
}