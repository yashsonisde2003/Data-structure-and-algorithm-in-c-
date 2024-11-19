#include <iostream>
#include <vector>
using namespace std;

std::vector<int> twosum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    for (int i : twosum(nums, target))
    {
        cout << i;
    }
    vector<int>
        vec = {1, 2, 3, 4, 5};
    cout << "size = " << vec.size() << endl;
    vec.push_back(45);
    vec.push_back(35);
    vec.push_back(25);
    vec.pop_back(); // it will remove 25 from back during execution
    cout << "element at the start of vector = " << vec.front() << endl;
    cout << "element at the end of the vector = " << vec.back() << endl;
    cout << "element at the specific index = " << vec.at(1) << endl;
    for (int i : vec)
    {
        cout << i << ", ";
    }
    // vector<int> vec = {1, 2, 3};
    // vector<int> vec(3, 1); //(size of the vector,int to be stored at each index)
    // for each loop willbe used for printing the vectors each items most of the time in this case the item itself will be using inclding the item itslef instead of its index
    // for (int i : vec)
    // {
    //     cout << i << " ";
    // }
    // return 0;
}