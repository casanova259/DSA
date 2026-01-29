#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class BRUTEFORCE {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       int count=0;

       for(int start=0;start<nums.size();start++){
            int OddCount=0;

            for(int end=start;end<nums.size();end++){

                //if the nums element is odd we increment the odd count
                if(nums[end]&1) OddCount++;

                //
                if(OddCount>k) break;

                if(OddCount==k) count++;

            }
       }

       return count;    
    }
};

class BETTER {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> freqCount;

        //initialise the first base case 
        freqCount[0]=1;

        // Running count of odd numbers in the current prefix
        int count=0;
        //total number of nice subarrays
        int result=0;

        for(int num:nums){

            //if the num is odd
            if(num&1) count++;

            //if there exxists a prefix with currentoddcount-k ,add the freq to the result
            if(freqCount.count(count-k)){
                result+=freqCount[count-k];
            }

            //upadte the freq of the curr odd count
            freqCount[count]++;
        }

        return result;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}