#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int ind = -1;
        int n = nums.size();

        // 1. to find the largest prefix we had to find the breaking point in the array
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                ind = i;
                break;
            }
        }

        // If no break point, reverse the whole array
        if (ind == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        // now let's just finnd the element which is just greater thaan the element at the break point
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > nums[ind])
            {
                // then we swap both the elements
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // now we have to  just make the remaining part aas small as possible so  we reversseit
        reverse(nums.begin() + ind + 1, nums.end());
    }
};
int main()
{
    // created by manik sharma

    return 0;
}