#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        int n = nums.size();

        vector<vector<int>> ans;

        int total = 1 << n;

        for (int mask = 0; mask < total; mask++)
        {
            vector<int> subset;

            for (int j = 0; j < n; j++)
            {
                if (mask & (1 << j))
                {
                    // include nums[j]
                    subset.push_back(nums[j]);
                }
            }

            ans.push_back(subset);
        }

        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> ans;

        int total = 1 << n;

        for (int mask = 0; mask < total; mask++) {
            vector<int> subset;

            for (int j = 0; j < n; j++) {
                if (mask & (1 << j)) {
                    // include nums[j]
                    subset.push_back(nums[j]);
                }
            }

            ans.push_back(subset);
        }

        return ans;
    }
};

int main()
{
    // created by manik sharma

    return 0;
}