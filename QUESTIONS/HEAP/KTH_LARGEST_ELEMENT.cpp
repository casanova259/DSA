#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq;

        // pehle k element ko process kro
        for (int i = 0; i < k; i++)
        {
            pq.push(nums[i]);
        }

        // ab baki elements ko process kro aur jo top se chota ho use queue m insert krdo
        for (int i = k; i < nums.size(); i++)
        {
            if (nums[i] > pq.top())
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }

        return pq.top();
    }
};
int main()
{
    // created by manik sharma

    return 0;
}