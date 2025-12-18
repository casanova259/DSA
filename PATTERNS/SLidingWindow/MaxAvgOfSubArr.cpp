#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum=0;
        int WindowStart=0;
        double windowAvg=0;
    double avg = -1e9; // or DBL_MIN (include <cfloat>)
;
        
        if(k==1&&nums.size()==1) return double(nums[0]);
        
        for(int windowEnd=0;windowEnd<nums.size();windowEnd++)
        {
            //add the next element
            windowSum+=nums[windowEnd];

            //sldie the window forward 
            if(windowEnd>=k-1)
            {
            
                
                windowAvg=windowSum/double(k);

                if(windowAvg>avg)
                {
                    avg=max(avg,windowAvg);
                }

                windowSum-=nums[WindowStart];
                WindowStart++;
            }
        }

        return avg;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}