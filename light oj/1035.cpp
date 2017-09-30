#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int a[1000005],b[1000005],l;
int list1[1000005];
map<int ,int>mp;
void prime()
{

    for(int i=2; i<=sqrt(1000005); i++)
    {
        if(a[i]==0)
        {
            for(int j=i+i; j<=1000005; j+=i)
                a[j]=1;
        }
    }
    for(int k=2; k<=1000005; k++)
    {
        if(a[k]==0)
        {
            b[l]=k;
            l++;
        }
    }

}
int main()
{
    prime();
    int n,j,tc,t,s=0;
    cin>>tc;
    t=1;
    while(tc--)
    {

        cin>>n;
        int p;
        for(int v=2; v<=n; v++)
        {
            int h;
            h=v;
            for(int i=0; b[i]<=h; i++)
            {
                if(h%b[i]==0)
                {
                    p=h;
                    while(p%b[i]==0)
                    {
                        mp[b[i]]=list1[i]++;
                        p=p/b[i];
                    }
                    h=p;
                }
            }
            if(h>1)
            {
                mp[h]=list1[h]++;
            }
        }
        map<int,int>::iterator ii;

        printf("Case %d: %d = ",t,n);

        for(ii=mp.begin(),s=0; ii!=mp.end(); ++ii,s++)
        {
            printf("%d (%d)",(*ii).first,(*ii).second+1);
            if(s<mp.size()-1)
                printf(" * ");
        }
        cout<<endl;
        t++;
        mp.clear();
        memset(list1,0,sizeof list1);
    }
    return 0;
}

