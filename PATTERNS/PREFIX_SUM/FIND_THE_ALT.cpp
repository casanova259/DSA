

#include <iostream>
#include<vector>
#include<limits>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAltitude = 0;
        int maxAltitude = 0;
        for (int i = 0; i < gain.size(); i++) {
            currentAltitude += gain[i]; 
            maxAltitude = max(maxAltitude, currentAltitude);
        }

        return maxAltitude;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}