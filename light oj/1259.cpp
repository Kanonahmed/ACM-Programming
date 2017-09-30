#include<bits/stdc++.h>
using namespace std;
bool vis[10000009];
int a[1000005],k;
void seive()
{
    a[k++]=2;
    for(int i=4;i<=10000000;i+=2)vis[i]=1;
    for(int i=3;i<=10000000;i+=2)
    {
        if(!vis[i])
        {
            a[k++]=i;
            for(int j=i+i;j<=10000000;j+=i)vis[j]=1;
        }
    }
}
int main()
{
    seive();
    //cout<<k<<endl;
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
       int n;
       cin>>n;
        long long cnt=0;
        for(int i=0;i<k;i++)
        {
            int x=a[i];
            int y=n-x;
            if(x>y)break;
            if(vis[y]==0)cnt++;
        }
       printf("Case %d: %lld\n",ks++,cnt);
   }


    return 0;
}
