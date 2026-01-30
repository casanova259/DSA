#include <iostream>
#include <vector>
using namespace std;

class OPTIMAL {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        // this is the total of the front of the k cards
        int total = 0;

        for (int i = 0; i < k; i++) {
            // adding the current front k cards to the total
            total += cardPoints[i];
        }

        // store the current max
        int maxPoints = total;
        // yet means bro u simply store it and update as u approach some larger
        // scroes

        // move the window by removing the front card and adding the one from
        // the back
        for (int i = 0; i < k; i++) {
            // Subtract card from front
            total -= cardPoints[k - 1 - i];

            // Add card from back
            total += cardPoints[n - 1 - i];

            // Update max score if needed
            maxPoints = max(maxPoints, total);
        }

        return maxPoints;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}