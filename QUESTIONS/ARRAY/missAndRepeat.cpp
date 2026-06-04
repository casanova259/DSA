#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // created by manik sharma

    return 0;
}
pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    long long S = 1LL * n * (n + 1) / 2;
    long long P = 1LL * n * (n + 1) * (2 * n + 1) / 6;

    long long arrSum = 0;
    long long arrSqSum = 0;

    for (int x : arr)
    {
        arrSum += x;
        arrSqSum += 1LL * x * x;
    }

    long long diff = S - arrSum;
    long long sqDiff = P - arrSqSum;

    long long sumMR = sqDiff / diff;

    int missing = (diff + sumMR) / 2;
    int repeating = sumMR - missing;

    return {missing, repeating};
}
