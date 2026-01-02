#include <iostream>
#include <vector>
#include <limits>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD=1e9+7;
        int count=0,prefixSum=0;

        //even count starts at 1 since the initial sum 0 is even
        int oddCount=0,evenCount=1;

        for(int num:arr)
        {
            prefixSum+=num;
            //if the curr prefix sum id even , add the number of odd subarrays
            if(prefixSum%2==0)
            {
                count+=oddCount;
                //and increment the even count
                evenCount++;
            }
            else
            {
                //if the prefix sum is odd , add the num of even
                count+=evenCount;
                oddCount++;
            }
            count%=MOD;//to handle the olarge RESULTS
        }

        return count;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}