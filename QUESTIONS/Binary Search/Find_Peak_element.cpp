#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] > nums[mid + 1])
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}