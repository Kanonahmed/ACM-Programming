#include<bits/stdc++.h>
using namespace std;
int a[2*105][105];
int DP[2*105][105];
int n;
int rock(int i,int j)
{
    if(i>=1&&i<2*n&&j>=1&&j<=n)
    {
        if(DP[i][j]!=-1)return DP[i][j];
        int ret=-100;
        if(i<=n-1)
        {
            ret=max(ret,rock(i+1,j)+a[i][j]);
            ret=max(ret,rock(i+1,j+1)+a[i][j]);
            DP[i][j]=ret;
        }
        else
        {
            ret=max(ret,rock(i+1,j)+a[i][j]);
            ret=max(ret,rock(i+1,j-1)+a[i][j]);
            DP[i][j]=ret;
        }
      return DP[i][j];
    }
    else return 0;


}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        memset(DP,-1,sizeof DP);
        cin>>n;
        int red=2;
        for(int i=1; i<2*n; i++)
        {
            if(i<=n)
                for(int j=1; j<=i; j++)cin>>a[i][j];
            else
            {
                for(int j=1; j<=i-red; j++)cin>>a[i][j];
                red+=2;
            }
        }
        cout<<"Case "<<t<<": "<<rock(1,1)<<endl;
        memset(a,0,sizeof a);
        t++;
        }
    return 0;
}
