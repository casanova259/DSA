#include<vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int left=0;
        int total=0;

        for(int x:nums)
        {
            total+=x;
        }
        

        int right=0;

        for(int i=0;i<nums.size();i++)
        {
            right=total-left-nums[i];
            if(left==right) return i;
            left+=nums[i];
        }
        return -1;

    }

};
int main()
{
//created by manik sharma

return 0 ;
}