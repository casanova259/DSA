#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        int n = nums.size();

        int ans = 0;

        // XOR all numbers from 0 to n
        for (int i = 0; i <= n; i++)
        {
            ans ^= i;
        }

        // XOR all array elements
        for (int num : nums)
        {
            ans ^= num;
        }

        return ans;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}