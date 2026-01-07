#include <iostream>
#include <vector>
#include<limits>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        // first we create two pointers one as left and other one as right
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            // now we would have to find the width which is right-left
            int width = right - left;
            // now the height will be the min of both cz if we take the bigger
            // one the container must overflow
            int hieght = min(height[left], height[right]);

            // but we have to do it for the whole array so we make a condition
            // left<=right

            // now after getting the hieght and the width
            // we caluclate the maxarea each time
            maxArea = max(maxArea, width * hieght);

            // now when we have to move the pointers
            if (height[left] < height[right]) {
                // why we move the left ptr so that we can find the next
                //bigger height which helps us to build the next conatiner whose
                //area is larger
                left++;
            }

            else {
                right--; 
                // so movwe the right
                // inwards we r doing it so that we can find the nexct greater height
                //whcih can help us to calculate or make a bigger container
            }
        }

        return maxArea;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}