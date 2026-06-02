#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice=1e9;
        int maxProfit=0;

        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minPrice)
            {
                minPrice=prices[i];
            }

            else
            {
                maxProfit=max(maxProfit,prices[i]-minPrice);
            }
        }

        return maxProfit ;

    }
};
int main()
{
//created by manik sharma

return 0 ;
}