#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        // sort them to bring the merge intervals close to each other
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        int n = intervals.size();

        for (int i = 0; i < n; i++)
        {
            int start = intervals[i][0];
            int end = intervals[i][1];

            int j = i + 1;

            while (j < n && intervals[j][0] <= end)
            {
                end = max(end, intervals[j][1]);
                j++;
            }

            merged.push_back({start, end});

            i = j - 1;
        }

        return merged;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}