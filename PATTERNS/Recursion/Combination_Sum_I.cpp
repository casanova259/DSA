#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void combinationSum_helper(vector<int> &candidates, int target, vector<int> v,
                               vector<vector<int>> &ans, int index)
    {
        // base case
        if (target == 0)
        {
            ans.push_back(v);
            return;
        }
        if (target < 0)
            return;

        for (int i = index; i < candidates.size(); i++)
        {

            v.push_back(candidates[i]);
            combinationSum_helper(candidates, target - candidates[i], v, ans, i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> v;
        combinationSum_helper(candidates, target, v, ans, 0);
        return ans;
    }
};

class REVSOL112 {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>>& ans,
               int index, vector<int> ds) {

        // Base Case
        if (index == candidates.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        // Pick Choice
        if (candidates[index] <= target) {
            ds.push_back(candidates[index]);
            solve(candidates, target - candidates[index], ans, index , ds);
            ds.pop_back();
        }

        // Not Pick
        solve(candidates, target, ans, index + 1, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int index = 0;
        vector<int> ds;

        solve(candidates, target, ans, index, ds);

        return ans;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}