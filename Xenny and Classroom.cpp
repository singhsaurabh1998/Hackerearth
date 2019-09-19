#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define intt long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,evenB = 0,oddB = 0,evenG = 0,oddG = 0;
        cin>>n;
        string str;
        cin>>str;
        for(int i = 0 ; str[i] ; i++)
        {
            if(i & 1)
            {
                if(str[i] == 'B')
                    oddB++;
                else
                    oddG++;
            }
            else
            {
                if(str[i]=='B')
                    evenB++;
                else
                    evenG++;
            }

        }
        int ans1 = min(evenB,oddG);
        int ans2 = min(oddB,evenG);
        cout<<min(ans1,ans2)<<"\n";
    }
}
