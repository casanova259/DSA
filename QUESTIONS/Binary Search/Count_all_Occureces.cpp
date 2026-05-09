#include <iostream>
#include <vector>
using namespace std;
class BRute
{

public:
    int count(vector<int> &arr, int n, int x)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            // counting the occurrences:
            if (arr[i] == x)
                cnt++;
        }
        return cnt;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}