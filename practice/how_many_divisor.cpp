#include<bits/stdc++.h>
using namespace std;
const int N=10000000;
int vis[9*N],k;
int pr[9*N];
void seive()
{
    for(int i=3; i<=N; i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(int j=3*i; j<=N; j+=i)vis[j]=1;
        }
    }
    pr[0]=2;
}
int pwr(int n,int pw)
{
    int q=1;
    for(int i=1;i<=pw;i++)q*=n;
    return q;
}
int main()
{
    seive();
    int n,c,res=1,co,sum=1;
    cin>>n;
    co=n;
    for(int i=0; pr[i]<=sqrt(n); i++)
    {
        c=0;
        if(n%pr[i]==0)
        {
            co-=co/pr[i];
            while(n%pr[i]==0)
            {
                n/=pr[i];
                c++;
            }
        }
        if(c){res*=(c+1);sum*=(pwr(pr[i],c+1)-1)/(pr[i]-1);}
    }
    if(n>1){res*=2;co-=co/n;sum*=(pwr(n,2)-1)/(n-1);}
    cout<<"number of divisor= "<<res<<endl;
    cout<<"sum of divisor= "<<sum<<endl;
    cout<<"number of co-prime = "<<co<<endl;
    return 0;
}
