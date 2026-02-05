#include <iostream>
#include <vector>
using namespace std;
class RECURSIVE {
public:
    const int MOD = 1e9 + 7;
    int solution(int index, long long n) {
        // BASE CASE
        if (index == n) {
            // if we have reached the end of the string we return 1
            return 1;
            // return 1
        }

        int result = 0;

        // first thing we have to checck is if the num is even
        if (index % 2 == 0) {
            // even digits:0,2,4,6,8
            for (int digit : {0, 2, 4, 6, 8}) {
                result = (result + solution(index + 1, n)) % MOD;
            }

        }

        // second thing we have to check if the odd one is prime
        else {
            // means the num is odd
            for (int digit : {2, 3, 5, 7}) {
                result = (result + solution(index + 1, n)) % MOD;
            }
        }

        return result;
    }
    int countGoodNumbers(long long n) { return solution(0, n); }
};

int main()
{
//created by manik sharma

return 0 ;
}