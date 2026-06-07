#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        ;
        if (n == 0)
            return 0;

        // then we make the longest and insert each element in a set ds
        int longest = 1;
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }

        // now we got each element in a set
        // ab hum check krenge if n-1 exist if it does we can say the sequence has a starting point
        for (auto it : st)
        {
            if (st.find(it - 1) == st.end())
            {
                int cnt = 1;
                int x = it;

                while (st.find(x + 1) != st.end())
                {
                    x = x + 1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}