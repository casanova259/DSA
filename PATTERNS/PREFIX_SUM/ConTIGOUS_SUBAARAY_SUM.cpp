#include <iostream>
#include<vector>
#include<limits>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // first we have to make a map
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            // sum k andr element add kro
            sum += nums[i];

            if (mp.find(sum % k) != mp.end()) {
                if (i - mp[sum % k] >= 2) {
                    return true;
                } 
            }
            else {
                    mp[sum % k] = i;
                }
        }
        return false;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}