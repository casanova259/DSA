#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int left=0;
        int right=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            //now we check the value of each element as we know array is sorted so what
            //does that mean ki right side ya end ki values will produce a higher square
            //and same for -ves numbers
            if(abs(nums[left])>abs(nums[right])){
                //agr leftest element bda h rightest se toh uska square kaha aayega ek dum right me
                ans[i]=nums[left]*nums[left];
                left++;
            }
            else
            {
                //ab agr right wala bda h so it will come at6 right
                ans[i]=nums[right]*nums[right];
                right--;
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