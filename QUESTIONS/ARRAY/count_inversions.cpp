#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

long long getInversions(long long *arr, int n)
{
    // Write your code here.

    long long count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                count++;
        }
    }

    return count;
}
int main()
{
    // created by manik sharma

    return 0;
}