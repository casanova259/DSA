#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();

        int m=matrix[0].size();

        int lw=0,high=n*m-1;

        while(lw<=high)
        {
            int mid=(lw+high)/2;

            int row=mid/m;
            int col=mid%m;

            if(matrix[row][col]==target)
                return true;

            else if(matrix[row][col]<target)
                lw=mid+1;

            else 
                high=mid-1;
        }

        return false;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}