#include <iostream>
#include<math.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //sort krdiya h array ko so that two pointers can be applied efficiently 
        sort(nums.begin(),nums.end());

        //initial result to compare with
        int result=nums[0]+nums[1]+nums[2];

        for(int i=0;i<nums.size()-2;i++)
        {
            //left ptr adjacent to right and then right to the end
            //ek chiz dimag m rkho u dont have to find the triplet or anything
            //we just have to find the number which is closest to the target
            int left=i+1;
            int right=nums.size()-1;

            while(left<right){
                //calculating the sum with three ptrs on the array
                int sum=nums[i]+nums[left]+nums[right];

                //yaha ye check krna ki konsa sum target ke jyada pass h
                if(abs(target-sum)<abs(target-result))
                {
                    //setting that sum ==result
                    result=sum;
                }

                //now agr jo sum humne cal kiya woh target ke barabar h toh return target
                if(sum==target) return target;
                //now agr woh sum target se chota h toh we need a bigger number
                //so we move the ptr left ahead as the array is sorted
                else if(sum<target) left++;
                //now vice versa the opp one agr sum chota h toh simple right ko andr layo and
                //search for a nuber lesser than curr right ptr
                else right--;
            }
        }

        return result;
    }
};

 
int main()
{
//created by manik sharma

return 0 ;
}