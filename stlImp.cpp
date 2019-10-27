#include<bits/stdc++.h>
/** https://practice.geeksforgeeks.org/problems/top-k-numbers/0*/
using namespace std;
struct comp
{
    bool operator()(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second==b.second)
            return a.first>b.first;
        else
            return a.second<b.second;

    }
};
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,x;
	    cin>>n>>k;
	    unordered_map<int,int>m;
	    for(int i = 0;i<n;i++)
        {
            int c = k;
            cin>>x;
            m[x]++;
            priority_queue<pair<int,int>,vector<pair<int,int>>,comp>q(m.begin(),m.end());
            while(!q.empty() && c--)
            {
                cout<<(q.top()).first<<" ";
                q.pop();
            }

        }
        cout<<"\n";

	}
}
