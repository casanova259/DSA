#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minBitFlips(int start, int goal)
    {

        // XOR gives bits that are different
        int x = start ^ goal;

        int count = 0;

        // Count set bits
        while (x > 0)
        {

            // Check last bit
            count += (x & 1);

            // Right shift
            x >>= 1;
        }

        return count;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}