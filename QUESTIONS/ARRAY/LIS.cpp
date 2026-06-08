#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int left = 0;
        int maxlen = 0;
        unordered_set<char> mp;

        for (int right = 0; right < s.length(); right++)
        {
            while (mp.find(s[right]) != mp.end())
            {
                // mtlb we found the char in the set
                mp.erase(s[left]);
                left++;
            }

            mp.insert(s[right]);

            maxlen = max(maxlen, right - left + 1);
        }

        return maxlen;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}