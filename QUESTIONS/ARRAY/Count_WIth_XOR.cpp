#include <iostream>
#include <vector>
using namespace std;
#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int xorVal = 0;

        for (int j = i; j < arr.size(); j++)
        {
            xorVal = xorVal ^ arr[j];

            if (xorVal == x)
                cnt++;
        }
    }

    return cnt;
}
int main()
{
    // created by manik sharma

    return 0;
}