#include <iostream>
#include <limits.h>
#include <vector>
#include<unordered_map>
using namespace std;
class Solution
{
public:
    string minWindow(string s, string t)
    {
        unordered_map<char, int> m;
        // statistic for count of char in T
        for (auto c : t)
            m[c]++;
        // counter represents the num of char of to be found in s
        int start = 0, end = 0, counter = t.size(), minStart = 0,minLen = INT_MAX;
        int size = s.size();

        // Move end to find a valid window
        while (end < size)
        {
            // if  Char in s exists in t ,decrease counter
            if (m[s[end]] > 0)
                counter--;

            // Decrease m[s[end]] if char doesn;t exists in t, m[s[end]] will be
            // negative
            m[s[end]]--;
            end++;

            // When We found a valid window ,move start to find smaller Window
            while (counter == 0)
            {
                if (end - start < minLen)
                {
                    minStart = start;
                    minLen = end - start;
                }
                m[s[start]]++;
                // when char exisits in t , increase counter
                if (m[s[start]] > 0)
                    counter++;
                start++;
            }
        }

        if (minLen != INT_MAX)
            return s.substr(minStart, minLen);

        return "";
    }
};
int main()
{
    // created by manik sharma

    return 0;
}