#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int solveUsingRecursion(vector<int> &nums, int index)
    {
        // base case
        if (index >= nums.size())
        {
            return 0;
        }

        // recursive relation
        // 1.include krne ka answer
        int include = nums[index] + solveUsingRecursion(nums, index + 2);

        // 2. exclude ka answer
        int exclude = 0 + solveUsingRecursion(nums, index + 1);

        int ans = max(include, exclude);

        return ans;
    }

    // using memoization
    int SolveUsingMemoization(vector<int> &nums, int index, vector<int> &dp)
    {
        // base case
        if (index >= nums.size())
        {
            return 0;
        }

        // step 3: check  if answer already exist then return the answer
        if (dp[index] != -1)
        {
            return dp[index];
        }
        // step 2:store ans in dp  array

        // recursive relation
        // 1.include krne ka answer
        int include = nums[index] + SolveUsingMemoization(nums, index + 2, dp);

        // 2. exclude ka answer
        int exclude = 0 + SolveUsingMemoization(nums, index + 1, dp);

        dp[index] = max(include, exclude);

        return dp[index];
    }

    // using tabulation method
    int SolveUsingTabulation(vector<int> &nums, int index)
    {
        int n = nums.size();
        // step 1 : dp array ccreate krna
        vector<int> dp(n, -1);

        // hard code usko  jo hum jante h
        dp[n - 1] = nums[n - 1];

        // step 3:  hum ek loop chalayenge jo ki kya kkrega jo ki  hume ans nikal k dega
        // ab suno kese jab humne ek ans hard code krdiya toh kitna reh gya n-2
        for (int index = n - 2; index >= 0; index--)
        {
            int TempAns = 0;
            if (index + 2 < n)
            {
                TempAns = dp[index + 2];
            }

            int include = nums[index] + TempAns;
            int exclude = 0 + dp[index + 1];

            dp[index] = max(include, exclude);
        }

        return dp[0];
    }

    // solve using space optimised

    int rob(vector<int> &nums)
    {
        int index = 0;
        // int n =nums.size();
        // Step 1: create an dp array
        // vector<int> dp(n,-1);
        int ans = SolveUsingTabulation(nums, index);
        return ans;
    }
};

int main()
{
    // created by manik sharma

    return 0;
}