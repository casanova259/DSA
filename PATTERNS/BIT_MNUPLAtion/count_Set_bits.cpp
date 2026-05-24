#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int hammingWeight(int n)
    {
        int count = 0;

        while (n)
        {
            n = n & (n - 1);
            count++;
        }

        return count;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}