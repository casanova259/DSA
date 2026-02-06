#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void subsets_helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>v, int index)
    {
        if(nums.size()==0) return;
        if(index==nums.size()){
            ans.push_back(v);
            return;
        }

        //inlcude
        v.push_back(nums[index]);
        //rec call
        subsets_helper(nums,ans,v,index+1);
        //backtracking
        v.pop_back();

        //exclusion
        subsets_helper(nums,ans,v,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>v;
        subsets_helper(nums,ans,v,0);
        return ans;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}