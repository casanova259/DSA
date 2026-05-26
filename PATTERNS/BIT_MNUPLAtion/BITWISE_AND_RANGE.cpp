#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {

        int shift = 0;

        // find common prefix
        while (left != right)
        {
            left >>= 1;
            right >>= 1;

            shift++;
        }

        // restore shifted bits
        return left << shift;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}