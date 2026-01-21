#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        unordered_map<int, int> mp;
        int maxi = 0;
        int left = 0;

        for (int right = 0; right < fruits.size(); right++)
        {
            mp[fruits[right]]++;

            while (mp.size() > 2)
            {
                // jese hi elements in the map increases from 2 we run this loop
                // toh we subtarct the element from the left from the map
                // and make left to  go ahead one step
                mp[fruits[left]]--;
                if (mp[fruits[left]] == 0)
                {
                    // when it becomes zero after that we erase the element
                    mp.erase(fruits[left]);
                }
                left++;
            }

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int maxi=0;
        int left=0;

        for(int right=0;right<fruits.size();right++){
            mp[fruits[right]]++;

            while(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}