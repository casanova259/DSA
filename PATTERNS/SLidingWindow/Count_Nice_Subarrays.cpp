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

class OPTIMAL {
public:

    int CountAtMost(vector<int>& nums, int k){
        int left=0,right=0;
        //initialise the ptrs for sliding window 
        int result=0;
        //res to return 

        //traverse the array 
        for(right=0;right<nums.size();right++){

            //if the curr num is odd reduce k
            if(nums[right]&1) k--;

            //shrink the window until k is valid
            while(k<0){
                if(nums[left]&1) k++;
                left++;
            }

            //Add Valid Subarrays ending at right
            result+=(right-left+1);
        }

        return result;
        
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return CountAtMost(nums,k)-CountAtMost(nums,k-1);
    }
};
int main()
{
//created by manik sharma

return 0 ;
}