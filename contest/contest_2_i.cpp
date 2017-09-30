#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL N=200000;
bool vis[N+3];
LL cp[200001];
LL gcd[200001];
LL sum[200001];
void phi()
{
    for(LL i=1;i<=N;i++)cp[i]=i;
    for(LL i=2;i<=N;i++)
    {
        if(!vis[i])
        {
            for(LL j=i;j<=N;j+=i)
            {
                cp[j]=(cp[j]/i)*(i-1);
                vis[j]=1;
            }
        }
    }
    // pillai's arithmetic function
    for(LL i=1;i<=N;i++)
     for(LL j=2*i;j<=N;j+=i)gcd[j]+=(i*cp[j/i]);

     for(LL i=2;i<=N;i++)sum[i]=sum[i-1]+gcd[i];
}
int main()
{
 phi();
 LL n;
 while(cin>>n&&n)
 {
     cout<<sum[n]<<endl;
 }


    return 0;
}
