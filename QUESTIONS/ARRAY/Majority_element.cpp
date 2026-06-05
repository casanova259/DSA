#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;

        int el = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                count++;
                el = nums[i];
            }
            else if (nums[i] == el)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        int cnt1 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == el)
            {
                cnt1++;
            }
        }
        if (cnt1 > (nums.size() / 2))
        {
            return el;
        }

        return -1;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}