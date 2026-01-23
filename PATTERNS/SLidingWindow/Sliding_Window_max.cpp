#include <iostream>
#include <deque>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;

        for(int i =0;i<k;i++)
        { 
            //chote element remove krdo
            while(!dq.empty()&&nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }
            //storing the index so that we can check and remove the out of the window elements
            dq.push_back(i);
        }
        
        ans.push_back(nums[dq.front()]);

        //processing the remaining elements
        for(int i =k;i<nums.size();i++)
        {
            //out of the window element ko remove krdo
            if(!dq.empty()&&i-dq.front()>=k)
            {
                dq.pop_front();
            }

            //chote element remove krdo
            while(!dq.empty()&&nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }
            //storing the index so that we can check and remove the out of the window elements
            dq.push_back(i);

            ans.push_back(nums[dq.front()]);
        }

        return ans;

    }
};
int main()
{
//created by manik sharma

return 0 ;
}