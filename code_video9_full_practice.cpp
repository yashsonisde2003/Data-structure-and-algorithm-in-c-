#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> &nums, int searched_item)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == searched_item)
        {
            return i;
        }
    }
}

int reversing_an_vector(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1;
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int searched_item = 2;
    // cout << linear_search(nums, searched_item);
    reversing_an_vector(nums);
    for (int i : nums)
    {
        cout << i;
    }
    return 0;
}