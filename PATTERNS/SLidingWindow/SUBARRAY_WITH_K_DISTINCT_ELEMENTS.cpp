#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class BRUTE {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;

        for(int i=0;i<nums.size();i++){
            //map to store the frequencies of the integers currently in the subarray
            unordered_map<int,int> freq;

            //loop through all possible indices
            for(int j=i;j<n;j++){

                //increment the freq of the current element
                freq[nums[j]]++;

                //then check if the freq of integers of that subarray is equal to K
                if(freq.size()==k) count++;

                //if it exceeds k we break the loop
                if(freq.size()>k) break;
            }
        }

        return count;
    }
};
class OPTIMAL {
public:
    int countAtMost(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        int count = 0;
        int left = 0;

        // traverse the array using the right ptr
        for (int right = 0; right < n; right++) {

            // check if the first element is unique
            if (freq[nums[right]]  == 0) {
                // if it's  a new element u decrease the K
                k--;
            }

            //now increment the freq of the curr element
            freq[nums[right]]++;

            while(k<0){
                //now if the constraint got broken we have to shrink the window
                freq[nums[left]]--;
                if(freq[nums[left]]==0){
                    //then if the freq of that element becomes zero
                    k++;
                    //we increment k
                }
                //and to shrink the window we make left go forward
                left++;
            }

            //count all the subarrays at last
            count+=(right-left+1);
        }

        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return countAtMost(nums, k) - countAtMost(nums, k - 1);
    }
};
int main()
{
//created by manik sharma

return 0 ;
}