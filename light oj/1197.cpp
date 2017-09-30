#include<bits/stdc++.h>
#define un unsigned int
using namespace std;
const int MAX=46355;
bool vis[46357],dp[100555];
un pr[46340],k;
void seive()
{
    pr[0]=2;
    for(un i=3;i<=MAX;i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(un j=2*i;j<=MAX;j+=i)vis[j]=1;
        }
    }
}
int segment_seive(un a,un b)
{
    if(b<2)return 0;
    if(a<2)a=2;
    if(b<4)return b-a+1;

    int cnt=0;
    memset(dp,0,sizeof dp);
    un qq=sqrt(b);
    for(int i=0;pr[i]<=qq&&i<=k;i++)
    {
        un tmp=a/pr[i];
        tmp*=pr[i];
        if(tmp<a)tmp+=pr[i];
        for(un j=tmp;j<=b;j+=pr[i])
        {
            if(j!=pr[i])dp[j-a]=1;
        }
    }
    for(un i=0;i<=b-a;i++)if(!dp[i])cnt++;
    return cnt;
}
int main()
{
    seive();
    int tc,ks=1;
    cin>>tc;
    while(tc--){
   int a,b;
   scanf("%d %d",&a,&b);
   int res=segment_seive(a,b);
   printf("Case %d: %d\n",ks++,res);
    }


    return 0;
}
