#include<bits/stdc++.h>
#include<bitset>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define intt long long
using namespace std;
/*inline void input(int &n)
{
    register char c=getchar();
    n=0;
    for(;(c<'0'||c>'9');c=getchar());
    for(;(c<='9'&&c>='0');c=getchar()){
        n=n*10+c-48;
    }
}*/
int sum(string str,int i,int dp[])
{
    if(i == str.length()) ///if we are at the last index
        return dp[i] = 0;
    if(dp[i]!=0) ///return the calculated value
        return dp[i];
    else
        return dp[i] = !((str[i]-'0')&1) + sum(str,i+1,dp); ///if current num is even then it will return 1

}

int main()
{
    string str;
    cin>>str;
    int n = str.length();
    int dp[n] = {0};

    sum(str,0,dp);///calculation of dp

    for(int i = 0;i<n;i++)
        cout<<dp[i]<<" ";
}
