#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /*  3355. Zero Array Transformation I
      1109. Corporate Flight Bookings
      1094. Car Pooling
      1854. Maximum Population Year
      2381. Shifting Letters II
      3356. Zero Array Transformation II*/
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        //build  a difference Array
        vector<int> diff(n+1,0);

        for(auto &b:bookings)
        {
            int l=b[0]-1;
            int r=b[1]-1;
            int seats=b[2];

            diff[l]+=seats;
            if(r+1<n) diff[r+1]-=seats;
        }

        vector<int> ans(n,0);
        ans[0]=diff[0];

        for(int i=1;i<n;i++)
        {
            ans[i]=ans[i-1]+diff[i];
        }

        return ans;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}