#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int WindowSum = 0;
        int left = 0;
        int mini = 1e9;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {

            // now when i increase the count basically let me check if sum
            WindowSum += nums[i];
            while (WindowSum >= target)
            {
                mini = min(mini, i - left + 1);
                WindowSum -= nums[left];
                left++;
            }
        }

        return mini == 1e9 ? 0 : mini;
    }
};

/*

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int mini = 1e9;
        int windowSum = 0;
        int n = nums.size();

        // now we have to make a loop to continue the process
        for (int i = 0; i < n; i++) {
            // adding the elements to the window sum
            windowSum += nums[i];

            while (windowSum >= target) {
                mini = min(mini, i - left + 1);
                windowSum -= nums[left];
                left++;
            }
        }

        return mini == 1e9 ? 0 : mini;
    }
};
*/
int main()
{
    // created by manik sharma

    return 0;
}