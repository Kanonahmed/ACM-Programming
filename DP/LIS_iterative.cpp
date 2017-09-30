#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dp[1000];
    int n,ar[1000];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>ar[i];
    int best=1;
    for(int i=0; i<=1000; i++)dp[i]=1;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]<ar[j])
            {
                dp[j]=max(dp[j],dp[i]+1);
                best=max(best,dp[j]);
            }
        }
    }

    cout<<"length of increasing subsequence "<<best<<endl;
    for(int i=n-1; i>=0; i--)
    {
        if(dp[i]==best)
        {
            cout<<ar[i]<<" ";
            best--;
        }
    }

    return 0;
}
