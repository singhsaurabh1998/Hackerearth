#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum = 0;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
        cin>>a[i],sum+=a[i];

    if(sum&1)
        {cout<<"NO\n";
        return 0;}

    sum = sum/2;
    bool dp[n+1][sum+1]; ///int binary problems take dp as bool not int
    for(int i = 0;i<=n;i++)
        dp[i][0] = true;

    for(int i = 1;i<=sum;i++)
        dp[0][i] = false;

    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=sum;j++)
        if(a[i-1]>j)
        dp[i][j] = dp[i-1][j];
        else
            dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];

    if(dp[n][sum])
        cout<<"YES\n";
        else
        cout<<"NO\n";



}
