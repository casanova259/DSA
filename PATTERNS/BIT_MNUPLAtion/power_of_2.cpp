#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {

        // Power of 2 must be positive
        if (n <= 0) {
            return false;
        }

        // If only one set bit exists
        return (n & (n - 1)) == 0;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}