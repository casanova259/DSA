#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        // if(nums[0]==target && nums.size()==1) return 1;

        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++)
        {
            totalSum+=nums[i];
        }


        //agr target sum se bda h toh impossible
        //agr sum +target  odd h toh impossible hoga
        if(abs(target)>totalSum) return 0;
        if((target+totalSum)%2!=0) return 0;

        int sum_pos=(target+totalSum)/2;
        vector<vector<int>> dp(n+1,vector<int>(sum_pos+1,0));

        dp[0][0]=1;
        //0 elements se 0 banane ke 1 way
        
        for(int i=1;i<=n;i++)
        {
            int val=nums[i-1];
            for(int s=0;s<=sum_pos;s++)
            {
                //exlcude if we didnt inlcude it the num of ways comes fron 
                //the prev row thats why i-1

                dp[i][s]=dp[i-1][s];
                //cuurent element ko inlcude krte h when only s>=val
                if(s>=val)
                {
                    //yeh when we include the element 
                    dp[i][s]+=dp[i-1][s-val];
                }
            }
        }
        return dp[n][sum_pos];
    }
};

int main()
{
//created by manik sharma

return 0 ;
}