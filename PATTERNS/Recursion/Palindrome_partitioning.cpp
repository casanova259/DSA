#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isPalindrome(const string &s, int start, int end)
    {
        // check if the substring s[left:right+1]
        while (start < end)
        {
            if (s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }
    void solve(const string &s, int start, vector<string> &path, vector<vector<string>> &ans)
    {
        // if We Reached the end of the string
        if (start == s.length())
        {
            ans.push_back(path);
            return;
        }

        // Explore all possible partitions
        for (int end = start + 1; end <= s.length(); end++)
        {
            // if the current substring is a palindrome ,add it to the current path
            if (isPalindrome(s, start, end - 1))
            {
                path.push_back(s.substr(start, end - start));
                // recursion to find other partitions
                solve(s, end, path, ans);
                // backtrack to explore other part
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> path;

        solve(s, 0, path, ans);

        return ans;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}