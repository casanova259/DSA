#include <iostream>
#include<vector>
#include<limits>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //create a hashmap
        unordered_map<int,int> mp;
        //pehle ek condn lgagyege
        mp[0]=1;
        int count=0;
        int prefixSum=0;

        for(int num:nums)
        {
            //update the prefix sum
            prefixSum+=num;

            if(mp.find(prefixSum-k)!=mp.end())
            {
                count+=mp[prefixSum-k];
            }

            //if i dont find the sum in the map we store it for further 
            //processing
             mp[prefixSum]++;
        }     

        return count;   
    }
};
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //create a hashmap
        unordered_map<int,int> mp;
        //pehle ek condn lgagyege
        mp[0]=1;
        int count=0;
        int prefixSum=0;

        for(int num:nums)
        {
            
            //update the prefix sum
            prefixSum+=num;

            if(mp.find(prefixSum-k)!=mp.end())
            {
                count+=mp[prefixSum-k];
            }

            //if i dont find the sum in the map we store it for further 
            //processing
             mp[prefixSum]++;
        }     

        return count;   
    }
};


int main()
{
//created by manik sharma

return 0 ;
}