#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int sp = 0;
        int tp = 0;

        while (sp < s.length() && tp < t.length())
        {
            // now if the character matches i have to increment the sp ptr
            if (s[sp] == t[tp])
            {
                sp++;
            }
            tp++;
        }

        return sp == s.length();
    }
};
int main()
{
    // created by manik sharma

    return 0;
}