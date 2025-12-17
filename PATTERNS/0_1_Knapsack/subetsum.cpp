#include <iostream>
using namespace std;
int main()
{
//created by manik sharma
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0)
            {
                dp[i][j]=false;
            }
            if(j==0)
            {
                dp[i][j]=true;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(dp[n][sum]==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
return 0 ;
}