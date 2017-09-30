#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m&&n&&m)
    {
        LL a[20005],b[20005];
        for(int i=0;i<n;i++)scanf("%lld",&a[i]);
        for(int i=0;i<m;i++)scanf("%lld",&b[i]);
        sort(a,a+n);
        sort(b,b+m);
        if(m<n){printf("Loowater is doomed!\n");continue;}
        LL res=0;
        int f=0;
        int vis[20005]={0};
        for(int i=0;i<n;i++)
        {
            //if(a[i]>b[i]){cout<<"‘Loowater is doomed!"<<endl;continue;}
            int chk=0;
            for(int j=0;j<m;j++)
            {
                if(!vis[j]&&a[i]<=b[j])
                {
                    vis[j]=1;
                    res+=b[j];
                    chk=1;
                    break;
                }
            }
            //res+=b[i];
            if(!chk){printf("Loowater is doomed!\n");f=1;break;}
        }
        if(!f)
        printf("%lld\n",res);
    }



    return 0;
}
