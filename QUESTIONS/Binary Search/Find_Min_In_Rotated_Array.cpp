#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=1e9;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mini)
            {
                mini=nums[i];
            }
        }

        return mini;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}