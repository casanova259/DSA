#include <iostream>
#inlcude<vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int e =  s.size()- 1;
        while (start < e) {
            swap(s[start], s[e]);
            start++;
            e--;
        }
    }
};
int main()
{
//created by manik sharma

return 0 ;
}