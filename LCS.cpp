#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int n = str1.length();
    int m = str2.length();
    int dp[n+1][m+1]; ///first row & column will be zero

    for(int i = 0;i<=n;i++)
    {
        for(int j = 0;j<=m; j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;

            else if(str1[i-1] == str2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);

        }
    }

    cout<<dp[n][m];
}
