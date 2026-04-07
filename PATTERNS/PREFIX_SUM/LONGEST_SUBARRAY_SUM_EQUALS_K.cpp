#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;
int main()
{
//created by manik sharma

return 0 ;
}
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here

    int len=0;
    int pf=0;
    unordered_map<int,int>mp;
    mp[0]=-1;

    for(int i=0;i<nums.size();i++)
    {
        pf+=nums[i];

        if(mp.find(pf-k)!=mp.end())
        {
            len=max(len,i-mp[pf-k]);
        }
        
        // store only first occurrence
        if(mp.find(pf) == mp.end())
        {
            mp[pf] = i;
        }
    }

    return len;
}