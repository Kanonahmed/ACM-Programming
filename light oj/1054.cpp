#include<bits/stdc++.h>
using namespace std;
const int N=10000000;
int a[N+5],b[N+5],k;
int divn[100000];
void seive()
{
    memset(a,0,sizeof a);
    k=0;
    int q=sqrt(N);
    for(int i=4; i<=N; i+=2)
        a[i]=1;
    for(int i=3; i<=q; i+=2)
    {
        if(a[i]==0)
        {
            for(int j=2*i; j<=N; j+=i)
                a[j]=1;
        }
    }
    for(int i=2; i<=N; i++)
    {
        if(a[i]==0)
        {
            b[k++]=i;
        }
    }
}
int main()
{
    seive();
    int m,n,qq,p=0;
    int div[100000];
    //memset(div,0,sizeof div);
    cin>>m>>n;
    qq=sqrt(m);
    for(int i=0; b[i]<=qq; i++)
    {
        if(m%b[i]==0)
        {
            int x=0;
            while(m%b[i]==0)
            {
                m=m/b[i];
                x++;
            }
            div[p]=b[i];
            divn[p]=x*n;
            p++;
        }
    }
    if(m>1)
    {
        divn[p]=n;
        div[p]=m;
        p++;
    }
    int sum=1;
    int ss;
    for(int i=0; i<p; i++)
    {
        //cout<<div[i]<<" "<<divn[i]<<endl;
        ss=pow(div[i],divn[i]);
        ss=ss%1000000007;
        sum=(sum*ss)%1000000007;
    }
    cout<<sum<<endl;
    return 0;
}
