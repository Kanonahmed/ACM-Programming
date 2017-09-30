#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        int dis[100005];
        int a[100005];
        int mn,h;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        h=a[n-1]+n;
        dis[0]=a[0];
        mn=dis[0];
        for(int i=1; i<n; i++)
        {
            dis[i]=a[i]-a[i-1];
            if(mn<dis[i])
                mn=dis[i];
        }
        int low=mn;
        int heigh=h;
        int mid,res=h;
        while(low<=heigh)
        {
            mid=(low+heigh)/2;
            int flag=0;
            int best=mid;
            for(int i=0; i<n; i++)
            {
                if(best==dis[i])best--;
                else if(best<dis[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)low=mid+1;
            else
            {
                if(res>mid)res=mid;
                if(res<mid)
                {
                    break;
                }
                heigh=mid-1;
            }
        }
        printf("Case %d: %d\n",t,res);
        t++;
    }
    return 0;
}
