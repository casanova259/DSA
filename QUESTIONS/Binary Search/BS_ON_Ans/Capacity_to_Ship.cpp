#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    bool canShip(vector<int> &weights, int days, int capacity)
    {
        int currWeight = 0;
        int d = 1;

        for (int w : weights)
        {

            // If adding this package exceeds capacity
            if (currWeight + w > capacity)
            {
                d++;
                currWeight = 0;
            }

            currWeight += w;
        }

        return d <= days;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {

        // int low = *max_element(weights.begin(), weights.end());
        // int high = accumulate(weights.begin(), weights.end(), 0);

    //     while (low < high)
    //     {

    //         int mid = low + (high - low) / 2;

    //         if (canShip(weights, days, mid))
    //         {
    //             high = mid; // try smaller capacity
    //         }
    //         else
    //         {
    //             low = mid + 1; // need bigger capacity
    //         }
    //     }

    //     return low;
    // }
};
int main()
{
    // created by manik sharma

    return 0;
}