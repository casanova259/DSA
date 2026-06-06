#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int reversePairs(vector<int> &nums)
    {
        long long cnt = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] > 2 * nums[j])
                    cnt++;
            }
        }

        return cnt;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}