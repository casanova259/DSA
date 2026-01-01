#include <iostream>
#include<vector>
#include<limits>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //let's convert the zero's to -1
       for(int i=0;i<nums.size();i++)
       {
            if(nums[i]==0)
            {
                nums[i]=-1;
            }
       }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int prefixSum=0;
        int ans=0;

        for(int num=0;num<nums.size();num++)
        {
            //prefix sum ko update kro
            prefixSum+=nums[num];

            if(mp.find(prefixSum)!=mp.end())
            {
                ans=max(num-mp[prefixSum],ans);
            }
            else{
            mp[prefixSum]=num;
            }
        }

        return ans;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}