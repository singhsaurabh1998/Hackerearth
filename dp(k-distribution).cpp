/*here we applied opposite approach to achieve the distribution*/
/*https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/k-distribution/*/
#include<bits/stdc++.h>
long long bs =  1e9+7;

using namespace std;

int n,a[1<<20],ans,T;
int answ;
int dp[1<<20];
long long S;
long long rem;

void add(int &a,int b)
{
	a+=b;
	if (a>=bs)
		a-=bs;
}

int main()
{

    cin>>n;
    cin>>T;
    --T;
     S=0;
    for (int i=1;i<=n;i++)
     {
         cin>>a[i];
         S+=a[i];
     }

    ans=1;
    for (int i=1;i<=n;i++)
     ans*=2,
     ans%=bs;

    dp[0]=1;
    for (int i=1;i<=n;i++)
    	for (int j=T-a[i];j>=0;--j)
    		if (dp[j]>0)
    			add(dp[j+a[i]],dp[j]);

    /*for(int i = 0;i<=100;i++)
        cout<<dp[i]<<" ";*/
    answ=0;
    for (int i=0;i<=T;i++)
    {
    	rem=S-i;
    	if (rem<=T)
    		add(answ,dp[i]);
    	else
    		add(answ,2*dp[i]%bs);
    }

    ans=(ans-answ+bs)%bs;
    cout<<ans<<endl;

return 0;}
