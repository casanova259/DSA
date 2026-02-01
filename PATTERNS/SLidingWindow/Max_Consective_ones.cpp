#include <iostream>
#include <limits>
#include <vector>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class BRUTE {
public:
    // Function to find the longest subarray with at most k zero flips
    int longestOnes(vector<int>& nums, int k) {

        // Variable to store the maximum length of valid subarray
        int maxLen = 0;

        // Loop to pick every possible starting point
        for (int i = 0; i < nums.size(); i++) {

            // Counter for zeros in the current subarray
            int zeros = 0;

            // Loop to pick every possible ending point
            for (int j = i; j < nums.size(); j++) {

                // If current element is zero, increment zero count
                if (nums[j] == 0) {
                    zeros++;
                }

                // If number of zeros exceeds k, break this subarray
                if (zeros > k) {
                    break;
                }

                // Update max length if this subarray is valid
                maxLen = max(maxLen, j - i + 1);
            }
        }

        // Return the length of the longest valid subarray
        return maxLen;
    }
};

// Driver code
int main() {
    Solution sol;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;

    // Output the result
    cout << sol.longestOnes(nums, k) << endl;
    return 0;
}

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,maxLength=0,zeroCount=0;

        for(int right=0;right<nums.size();++right){
            
            if(nums[right]==0){
                zeroCount++;
            }

            while(zeroCount>k){
                if(nums[left]==0)
                {
                    zeroCount--;
                }
                left++;
            }
         maxLength=max(maxLength,right-left+1);
        }

        return maxLength;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}