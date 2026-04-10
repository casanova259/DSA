#include <iostream>
#include <limits>
#include <vector>
using namespace std;



class BRUTE {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int size=numbers.size();

        for(int i=0;i<size;i++)
        {
            int first=numbers[i];

            for(int j=i+1;j<size;j++)
            {
                if(numbers[i]+numbers[j]==target)
                {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                }
            }
        }

        return ans;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int size=numbers.size();

        int left=0,right=size-1;
        int sum=0;

        while(left<=right)
        {
            sum=numbers[left]+numbers[right];

            if(sum==target)
            {
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }

            else if(sum<target)
            {
                left++;
            }

            else if(sum>target)
            {
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