#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

// Brute force SOlution
class BRUTEFORCE
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        // count to keep the track of the subarrays count
        int count = 0;

        for (int start = 0; start < nums.size(); start++)
        {
            int sum = 0;
            // keeping the initial sum as zero and such if the sum is equal to the goal we will
            // increment it

            // inner loop to fix the ending of the subarray
            for (int end = start; end < nums.size(); end++)
            {
                // add the curr eleement to the sum
                sum += nums[end];

                if (sum == goal)
                {
                    count++;
                }
            }
        }

        return count;
    }
};

class BETTER {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //initialise a hashmap for the prefix subarrays
        unordered_map<int,int> mp;
        //map  to store the sum and their frequencies
        int count=0,sum=0;
        //the couunt of valid subarrays and currsum
        mp[0]=1;
        //add the base case so that prefix sum 0 has freq 1

        for(int num:nums)
        {
            //iterating over the array
            sum+=num;
            //add the curr element to the prefix sum
            if(mp.find(sum-goal)!=mp.end()){
                //means if the prefix ssum already exists in the array
                count+=mp[sum-goal];
            }
            mp[sum]++;
        }

        return count;
    }
};

class OPTIMAL {
public:

    int atmost(vector<int>&nums,int k)
    {
        //if k is negative , no such subarrays exists
        if(k<0) return 0;

        int left=0;
        int count=0;
        int sum=0;


        //now wahi traverse the array using the right ptr
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];

            //now we shrink thee window if the sum exceeds k
            while(sum>k){
                sum-=nums[left];
                left++;
            }

            //add the no of valid subarrays ending at right
            count+=(right-left+1);
        }

        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal)-atmost(nums,goal-1);
    }
};

int main()
{
    // created by manik sharma

    return 0;
}