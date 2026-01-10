#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int nextElement = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[nextElement] = nums[i];
                nextElement++;
            }
        }

        return nextElement;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}