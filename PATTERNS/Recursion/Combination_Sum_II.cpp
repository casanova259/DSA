#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    void combinationSum_helper(vector<int>& candidates, int target,
                               vector<int> v, vector<vector<int>>& ans,
                               int index) {
        // base case
        if (target == 0) {
            ans.push_back(v);
            return;
        }
        if (target < 0)
            return;

        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1]) {
                continue;
            }
            v.push_back(candidates[i]);
            combinationSum_helper(candidates, target - candidates[i], v, ans,
                                  i + 1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        combinationSum_helper(candidates, target, v, ans, 0);
        return ans;
    }
};

class SOL2 {
public:
    void solve(int index, int target, vector<int>& candidates,
               vector<vector<int>>& ans, vector<int> ds) {

        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        //first thing the elements must be unique so
        for(int i=index;i<candidates.size();i++)
        {
            //if both the elements are same we continue the iteration
            //to Aviod the repeating combinations
            if(i>index&&candidates[i]==candidates[i-1]) continue;

            //now if the arr element is greater than the target so we break
            if(candidates[i]>target) break;

            //include the curr element
            ds.push_back(candidates[i]);

            //make the recursive call
            solve(i+1,target-candidates[i],candidates,ans,ds);

            //pop back the element
            ds.pop_back();

        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // Sorting The Array to handle Duplicates
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0, target, candidates, ans, ds);
        return ans;
    }
};

int main()
{
//created by manik sharma

return 0 ;
}