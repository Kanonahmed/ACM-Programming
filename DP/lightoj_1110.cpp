#include<bits/stdc++.h>
using namespace std;
string a,b;
int DP[101][101];
char sp[101][101];
int dp(int i,int j)
{
    if(i>=a.size()||j>=b.size())return 0;
    if(DP[i][j]!=-1)return DP[i][j];
    int ans=0;
    if(a[i]==b[j])
    {
        sp[i][j]=a[i];
        ans=1+dp(i+1,j+1);
    }
    else
    {
        int r1=dp(i,j+1);
        int r2=dp(i+1,j);
        if(r1>r2) sp[i][j]=sp[i][j+1];
        else if(r1<r2) sp[i][j]=sp[i+1][j];
        else sp[i][j]=min(sp[i][j+1], sp[i+1][j]);
        ans=max(r1,r2);
    }
    DP[i][j]=ans;
    return DP[i][j];
}
string s,ss;
void view(int i,int j)
{
    if(i>=a.size()||j>=b.size())
    {
        cout<<s<<endl;
        return;
    }
    if(a[i]==b[j])
    {
        s+=sp[i][j];
        view(i+1,j+1);
    }
    else
    {
        if(DP[i][j+1]>DP[i+1][j]) view(i,j+1);
        else if(DP[i][j+1]<DP[i+1][j]) view(i+1,j);
        else
        {
            if(sp[i][j+1]<sp[i+1][j]) view(i, j+1);
            else view(i+1, j);
        }
    }

}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        memset(DP,-1,sizeof DP);
   int res=dp(0,0);
   for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++)cout<<DP[i][j]<<" ";cout<<endl;}
        if(res)
        {
            s="";
            printf("Case %d: ",t);
           view(0,0);
        }
        else
        {
            printf("Case %d: :(\n",t);
        }
        t++;
    }

    return 0;
}
