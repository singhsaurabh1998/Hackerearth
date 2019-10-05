#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
inline void input(int &n)
{
    register char c = getchar();
    n = 0;
    for(;(c<'0' || c>'9');c = getchar());
    for(;(c>='0' && c<='9');c = getchar())
        n = n*10+c-48;
}
using namespace std;
int main()
{
    fast;
    int t;
    input(t);
    while(t--)
    {
        int n;
        input(n);
        int dp[n+1] = {0};
        dp[0] = 1;
        for(int i = 3;i<=n;i++)
            dp[i] += dp[i-3];

        for(int i = 5;i<=n;i++)
            dp[i] += dp[i-5];

        for(int i = 10;i<=n;i++)
            dp[i] += dp[i-10];

        cout<<dp[n]<<"\n";
    }
}
