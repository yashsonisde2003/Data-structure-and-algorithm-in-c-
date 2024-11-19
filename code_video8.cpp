#include <iostream>
#include <climits>
using namespace std;

int printing_array(int n)
{
    int marks[5] = {1, 2, 3, 45, 5};
    n = 5;
    for (int i = 0; i < n; i++)
    {

        cout << marks[i] << endl;
    }
}

int smalles_finder(int n)
{
    int nums[5] = {1, 521, -70, -80, 10};
    int smallest = INT_MAX; //+infinity //the one which is to be compared with this must win
    int largest = INT_MIN;  //-infinity //the one which is to be compared with this must win
    for (int i = 0; i < n; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout << largest << endl;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == largest)
        {
            cout << "Index of largest " << i << endl;
        }
    }
    cout << smallest << endl;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == smallest)
        {
            cout << "Index of smallest " << i << endl;
        }
    }
}
int linear_search(int arr[], int size, int search)
{
    // we have to find the item and when the item is founded we have return the index of it
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            return i; // return statement is being used beacuse after the return statement nothing is executed
        }
    }
    return -1;
}

void reversing_an_array(int size, int arr[])
{ // logic of two pointer approach
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5,9};
    int size = 8;
    reversing_an_array(size, arr);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int size = 6;
    // int target = 8;
    // cout << linear_search(arr, size, target);
    // smalles_finder(5);
    // printing_array(5);
    // cout << "Array data structure" << endl;
    // int n = 5;
    // int marks[5] = {20, 30, 40, 60, 50};
    // marks[0] = 101;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << marks[i] << endl;
    // } // will be taking input from user
    // valid size goes from zero to size-1.
}