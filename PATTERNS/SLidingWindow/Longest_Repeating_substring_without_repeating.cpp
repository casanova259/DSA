#include <iostream>
#include <unordered_set>
#include <vector>
#include <limits>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int left = 0;
        int max_length = 0;
        unordered_set<char> charSet;

        for (int right = 0; right < s.length(); right++)
        {
            while (charSet.find(s[right]) != charSet.end())
            {
                // means u did find that element in the
                // set which already exist
                charSet.erase(s[left]);
                left++;
            }

            charSet.insert(s[right]);
            max_length = max(max_length, right - left + 1);
        }

        return max_length;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}