#include<bits/stdc++.h>
#define intt long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n]; ///given set
    for(int i = 0;i<n;i++)
        cin>>a[i];

    int dp[n+1][sum+1];
    for(int i = 0;i<=n;i++)
        dp[i][0] = true;/// first collumn will always be zero coz 0 can be formed from any subset(as null subset)

    for(int i = 1;i<=sum;i++)
        dp[0][i] = false;

    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=sum;j++)
        {
            if(a[i-1]>j)/// element is greater than the particular sum(j) then copy the above elemnt there is no effect
                dp[i][j] = dp[i-1][j];
            else///excluding current elem or inc the current
                dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];///in just above column subtract element from current sum
        }

    ///now last row tells weather sum can be formed or not
    /*for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
            cout<<dp[i][j]<<" ";
            cout<<"\n";
    }*/
    cout<<dp[n][sum];///answer
}
