#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:

    bool solve(vector<int>&nums,int n, int sum)
    {
        //make a dp table
        vector<vector<bool>>t(n+1,vector<bool>(sum+1,false));

        //initialisation krenge
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(j==0) t[i][0]=true;
            }
        }

        //now we gonna build the aanswer
        for(int i =1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(nums[i-1]<=j)
                {
                    t[i][j]=t[i-1][j-nums[i-1]]||t[i-1][j];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }

        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n =nums.size();

        //calculating thr sum of the array nums
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }

        if(sum&1)
        {
            return false;
        }
        else
        {
            return solve(nums,n,sum/2);
        }
    }
};
int main()
{
//created by manik sharma

return 0 ;
}