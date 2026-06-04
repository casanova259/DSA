#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[0];

        while (1)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];

            if (slow == fast)
                break;
        }

        int slow2 = nums[0];
        while (slow != slow2)
        {
            slow = nums[slow];
            slow2 = nums[slow2];
        }

        return slow;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}