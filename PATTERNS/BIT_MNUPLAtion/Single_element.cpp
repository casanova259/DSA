#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) { 
        
        int num=0;

        for(int i =0;i<nums.size();i++)
        {
            num=num^nums[i];
        }    
        return num;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}