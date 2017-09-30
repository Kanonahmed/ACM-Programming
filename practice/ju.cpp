#include<bits/stdc++.h>
using namespace std;
int vis[10000000],vis1[5005];
int main()
{
    int n;
    int xx[5005],yy[5005];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d",&xx[i],&yy[i]);
        vis[xx[i]]=i;

    }
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(xx[i]>xx[j])
            {
                int temp;
                temp=xx[i];
                xx[i]=xx[j];
                xx[j]=temp;
                int tmp;
                tmp=yy[i];
                yy[i]=yy[j];
                yy[j]=tmp;
            }
            else if(xx[i]==xx[j])
            {
                if(yy[i]>yy[j])
                {
                    int temp;
                    temp=xx[i];
                    xx[i]=xx[j];
                    xx[j]=temp;
                    int tmp;
                    tmp=yy[i];
                    yy[i]=yy[j];
                    yy[j]=tmp;
                }
            }
        }
    }

    int k=1;
    int cnt=0;
    int flag,l=0;
    for(int i=1; i<=n; i++)
    {
        flag=0;
        for(int j=1; j<=n; j++)
        {
            if(j==i)j=j+k;

            if(j+1==i)
            {
                if(yy[j]>xx[j+2]&&(j+2)<=n)
                {
                    flag=1;
                    break;
                }
            }
            else if(yy[j]>xx[j+1]&&(j+1)<=n)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cnt++;
            vis1[l]=vis[xx[i]];
            l++;
        }
    }
    sort(vis1,vis1+cnt);
    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++)
    {
        printf("%d ",vis1[i]);
    }
    return 0;
}
