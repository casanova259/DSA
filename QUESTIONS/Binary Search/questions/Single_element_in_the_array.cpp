#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {

        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}