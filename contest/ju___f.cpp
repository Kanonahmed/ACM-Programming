#include<bits/stdc++.h>
using namespace std;
const int N=1000009;
int a[1000009];
int b[1000009];
void prime()
{
    int k=0;
    for(int i=4; i<=1000009; i+=2)
        a[i]=1;
    for(int i=3; i<=1000009; i+=2)
    {
        if(a[i]==0)
        {
            for(int j=2*i; j<=1000009; j+=i)
                a[j]=1;
        }
    }
    for(int i=2; i<=1000009; i++)
    {
        if(a[i]==0)
            b[k++]=i;
    }
}

int main()
{
    prime();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,n;
        int fnl;
        set<int>v;
        scanf("%d",&h);
        fnl=0;
        for(int k=2; k<=h; k++)
        {
            int sum=0;
            int x=0;
            n=k;
            int q=sqrt(n);
            for(int i=0; b[i]<=q; i++)
            {
                if(n%b[i]==0)
                {
                    x=0;
                    while(n%b[i]==0)
                    {
                        n=n/b[i];
                        x++;
                    }
                    v.insert(b[i]);
                    sum+=x;
                }
                q=sqrt(n);
            }
            if(n>1)
            {
                v.insert(n);
                sum++;
            }
            fnl+=sum;
        }
        printf("%d %d\n",v.size(),fnl);
    }
    return 0;
}
