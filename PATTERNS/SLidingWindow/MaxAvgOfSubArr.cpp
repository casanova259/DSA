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


/*20 Jan 2025*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currAvg = 0;
        double maxAvg = -1e9;
        int n = nums.size();
        double sum = 0;
        double K = k;

        // calculating the initial sum of the window
        for (int i = 0; i < K; i++) {
            sum += nums[i];
            // calculating the first sum then setting that sum as curr average
        }

        currAvg = sum / K;
        // then checking if the current average is greater than the curr or not
        maxAvg = max(currAvg, maxAvg);

        // now adding the new element to the window and removing the old one
        // from the window
        for (int i = K; i < n; i++) {
            int newElement = nums[i];
            int oldElement = nums[i - k];

            // now adding that elements to the sum
            sum = sum + newElement - oldElement;
            currAvg = sum / K;
            maxAvg = max(currAvg, maxAvg);
        }

        return maxAvg;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}