/*In This Problem We Just Need To Calculate The Total Even numbers from index i to the end of the string*/

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
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
    fast;
    string str;
    cin>>str;
    int n = str.length();
    int dp[n] = {0};

    sum(str,0,dp);///calculation of dp

    for(int i = 0;i<n;i++)
        cout<<dp[i]<<" ";
}
