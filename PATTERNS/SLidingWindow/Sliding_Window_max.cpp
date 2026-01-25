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

class Solution2 {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> dq;

        for (int i = 0; i < n; i++) {
            /*Har element ko window mein add karte hue process karte hain.*/

            // Remove indices outside the window
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Maintain decreasing order in deque
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            // Add maximum for the current window
            if (i >= k - 1)
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