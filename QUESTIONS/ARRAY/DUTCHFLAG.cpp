#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low,mid=0;
        int high=nums.size()-1;

        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }

            else if(nums[mid]==1)
            {
                mid++;
            }
            else 
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};
int main()
{
//created by manik sharma

return 0 ;
}