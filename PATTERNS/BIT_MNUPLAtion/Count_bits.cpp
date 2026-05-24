#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> countBits(int n)
    {

        vector<int> ans(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            ans[i] = ans[i & (i - 1)] + 1;
        }

        return ans;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}