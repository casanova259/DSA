#include <iostream>
#include<unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();

        vector<int> res;

        unordered_map<int,int> mp;

        int mini=int(n/3)+1;

        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;

            if(mp[nums[i]]==mini)
            {
                res.push_back(nums[i]);
            }

            if(res.size()==2) break;
        }

        return res;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}