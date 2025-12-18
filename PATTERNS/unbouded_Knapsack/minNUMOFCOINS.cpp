#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0)
            return 0;

        int n = coins.size();
        vector<vector<int>> t(n + 1, vector<int>(amount + 1, INT_MAX));

        // 0 amount needs zero coins
        for (int i = 0; i <= n; i++) {
            t[i][0] = 0;
        }

        for (int j = 1; j <= amount; j++) {
            // this is the initialisation for the first row as mtln kya h
            // ki basically first coin ka use krke if we can make the amount
            if (j % coins[0] == 0)
                t[1][j] = j / coins[0];
        }
        // this is where the initialisation is ended

        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= amount; j++) {
                // if we dont include the coin
                t[i][j] = t[i - 1][j];

                // if we take the coin when
                // kab lenge coin ko when curr amoutn yani j is greatere than
                // and = than num element and as well as tthis must be not equal
                // to int_MAX
                if (coins[i - 1] <= j && t[i][j - coins[i - 1]] != INT_MAX) {
                    t[i][j] = min(t[i][j - coins[i - 1]] + 1, t[i][j]);
                }
            }
        }

        return t[n][amount] == INT_MAX ? -1 : t[n][amount];
    }
};
int main()
{
//created by manik sharma

return 0 ;
}