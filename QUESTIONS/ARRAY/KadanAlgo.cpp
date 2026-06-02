#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi = LLONG_MIN;
        long long sum = 0;

        for (int num : nums) {
            sum += num;

            maxi = max(maxi, sum);

            if (sum < 0) {
                sum = 0;
            }
        }

        return maxi;
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int maxi = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            curr = max(nums[i], curr + nums[i]);
            maxi = max(maxi, curr);
        }

        return maxi;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}