#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void solve(int sum, int last, vector<vector<int>> &ans, int k,
               vector<int> nums)
    {
        // if the sum is = 0 and the nums has exactly k elements
        if (sum == 0 && nums.size() == k)
        {
            ans.push_back(nums);
            return;
        }
        // If the sum is less than or equal to zero or the number of elements
        // exceeds k
        if (sum <= 0 || nums.size() > k)
            return;

        // so inhe chahiye ki 1-9 nums call ho right
        for (int i = last; i < 10; i++)
        {
            if (i <= sum)
            {
                // if the current digit is less than sum thus it make sense to
                // make a call

                // 1. add that number to the nums array
                nums.push_back(i);
                // 2. make the recursive call
                solve(sum - i, i + 1, ans, k, nums);
                // 3.Remove the last number to baktrack
                nums.pop_back();
            }
            else
            {
                break;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> nums;
        solve(n, 1, ans, k, nums);
        return ans;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}