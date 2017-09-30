#include<bits/stdc++.h>
using namespace std;
int n;
int p[1001],w[1001];
int DP[1001][31];
int direction[1001][31];
int nap_sack(int i,int wight)
{
    if(i>=n)return 0;
    //int &ptr=DP[i][wight];
    if(DP[i][wight]!=-1)return DP[i][wight];
    int r1=0,r2=0;
   // if(ptr!=-1)return ptr;
    //ptr=0;
    if(wight-w[i]>=0)r1=p[i]+nap_sack(i+1,wight-w[i]);
       // ptr=max(ptr,p[i]+nap_sack(i+1,wight-w[i]));
   // ptr=max(ptr,nap_sack(i+1,wight));
   r2=nap_sack(i+1,wight);
    DP[i][wight]=max(r1,r2);
    return DP[i][wight];
    //return ptr;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>p[i]>>w[i];
        }
        memset(DP,-1,sizeof DP);
        int g;
        cin>>g;
        int sum=0;
        for(int i=0; i<g; i++)
        {
            int x;
            cin>>x;
            sum+=nap_sack(0,x);
        }
        cout<<sum<<endl;
    }


    return 0;
}
