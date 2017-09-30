#include<bits/stdc++.h>
using namespace std;
int prim[5000001];
int vis[5000001];
int k;
void seive()
{
    prim[0]=2;
    for(int i=3; i<=5000000; i+=2)
    {
        if(!vis[i])
        {

            prim[++k]=i;
            for(int j=2*i; j<=5000000; j+=i)vis[j]=1;
        }
    }
}
int save[5000001];
int l;
void how_much()
{
    seive();
    for(int i=2; i<=5000000; i++)
    {
        int v=i;
        for(int j=0; prim[j]*prim[j]<=v; j++)
        {
            if(v%prim[j]==0)
            {
                while(v%prim[j]==0)
                {
                    save[i]++;
                    v/=prim[j];
                }
            }
        }
        if(v>1)save[i]++;
        save[i]=save[i]+save[i-1];
    }
}
int main()
{
    how_much();
    int c;
    cin>>c;
    while(c--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",save[a]-save[b]);
    }

    return 0;
}
