#include <iostream>
#include <vector>
using namespace std;

int NthRoot(int n, int m)
{
    // Write your code here.
    // low as 1 and high as m now our search space is from 1 to M
    int low = 1, high = m;

    while (low <= high)
    {

        // calculate mid
        int mid = (low + high) / 2;

        long long ans = 1;

        // store the RES OF MID  ^n

        for (int i = 0; i < n; i++)
        {
            ans *= mid;

            if (ans > m)
                break;
        }

        if (ans == m)
            return mid;

        if (ans < m)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    // created by manik sharma

    return 0;
}