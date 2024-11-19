#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int bt_approach_Pairsum(int arr[], int n, int target)
// {
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 ans.pushback(i);
//                 ans.pushback(j);
//                 return ans;
//             }
//         }
//     }
// }

vector<int> optimised_approach_pairsum(int arr[], int n, int target)
{                         // in case of sorted array, which is in ascending order
    int i = 0, j = n - 1; // i is going from small to large//and j is going from large to small
    while (i < j)
    {
        int pairsum = arr[i] + arr[j];
        if (pairsum < target)
        {
            i++;
        }
        else if (pairsum > target)
        {
            j--;
        }
        else
        {
            return {i + 1, j + 1};
        }
    }
    return {};
}

int brute_force_approach_for_majority_element(vector<int> &nums)
{
    for (int i : nums)
    {
        int frequency = 0;
        for (int j : nums)
        {
            if (i == j)
            {
                frequency++;
            }
            if (frequency > nums.size() / 2)
            {
                return i;
            }
        }
    }
}

int brute_force_approach_of_majority_element_a_bit_more_optimised(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end()); // for using sorting of array in ascending order
    int frequency = 1, ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
        }
        if (frequency > n / 2)
        {
            ans = nums[i];
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 2, 3, 2, 2};
    // cout << brute_force_approach_for_majority_element(nums);
    cout << brute_force_approach_of_majority_element_a_bit_more_optimised(nums);
    return 0;
}