#include<bits/stdc++.h>
using namespace std;
/*Toggling the bits with range query*/
int main()
{
     int n,q;
    int val;
    cin>>n;
    int a[n],da[1000001]={0};///preparing the hash array

    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        da[l-1]++;
        da[r]--;
    }
    for(int i=1;i<=n;i++)
        da[i]+=da[i-1];

    long int c = 0;
    for(int i=0;i<n;i++)
        if(da[i]&1) ///only odd numbers positions in da will be toggled in a[]
            a[i]=a[i]?0:1;



    c = count(a,a+n,1);///counting the set bits

    cout<<c<<"\n";
    for(long int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
