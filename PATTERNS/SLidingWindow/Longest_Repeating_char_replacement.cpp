#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>
using namespace std;
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int maxFreq = 0, left = 0, maxLen = 0;
        unordered_map<char, int> freq;

        for (int right = 0; right < s.length(); right++)
        {
            // update the frequency of the char at right
            freq[s[right]]++;
            maxFreq = max(maxFreq, freq[s[right]]);
            // getting the freq of the most common character in the struing
            while (right - left + 1 - maxFreq > k)
            {
                freq[s[left]]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}