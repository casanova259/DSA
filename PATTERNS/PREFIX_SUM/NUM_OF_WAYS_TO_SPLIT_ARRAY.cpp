
#include <iostream>
#include <vector>
#include <limits>
using namespace std;
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        //so sabse pehle we build a prefix sum array to store the prefix sum
        int n=nums.size();
        vector<long long> prefix(n);
        prefix[0]=nums[0];

        //now build the prefix array
        for(int i =1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }

        //now after making the prefix array we got the whole sum at n-1 index
        //now prefix array ki help se hume valid split khojni h
        //ye ese hoga ki we will find the left sum and also thr right now if 
        //the left um >=right sum we got a split

        int count=0;
        // ye ans ko store kregaa
        for(int i=0;i<n-1;i++)
        {
            //sum of left part mtlb 0 se leke i tk'
            long long leftSum=prefix[i];

            //right ka sum yani i se leke n-1 tk 
            long long rightSum=prefix[n-1]-prefix[i];

            //ab check for valid split
            if(leftSum>=rightSum)
                count++;
        }

        return count;

        // now this approach take O(n) and O(n)
    }
};
int main()
{
    // created by manik sharma

    return 0;
}