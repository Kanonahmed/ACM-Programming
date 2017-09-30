#include<bits/stdc++.h>
using namespace std;
int a[1002][1002];
vector<pair<int,int> >v;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        //scanf("%d %d",&x,&y);
        a[x][y]=1;
        v.push_back(make_pair(x,y));

    }

    //cout<<endl;
    int  res=0;
    for(int i=0; i<n; i++)
    {
        int u=v[i].first;
        int uv=v[i].second;
        //cout<<u<<" "<<uv<<endl;
        if(a[u][uv])
        {
            int cnt=0;
            int ch=0;
            u++;uv++;
            while(u<=1000&&uv<=1000)
            {

                if(a[u][uv])
                {
                    cnt++;
                    //a[u][uv]++;
                }
                 u++;
                uv++;
            }
            //if(cnt){res+=cnt;ch=1;}
            //cout<<cnt<<endl;
            res+=cnt;
            cnt=0;
            u=v[i].first;uv=v[i].second;
            u++;uv--;
            while(u<=1000&&uv>=1)
            {
                if(a[u][uv])
                {
                    cnt++;//a[u][uv]++;
                }
                u++;uv--;
            }
            //if(cnt){res+=cnt;ch=1;}
            //if(ch)res+=1;
            res+=cnt;
            cnt=0;
            u=v[i].first;
            uv=v[i].second;
            u--;
            uv++;
            while(u>=1&&uv<=1000)
            {
                if(a[u][uv])cnt++;
                u--;uv++;
            }
            res+=cnt;

            cnt=0;
            u=v[i].first;
            uv=v[i].second;
            u--;
            uv--;
            while(u>=1&&uv>=1)
            {
                if(a[u][uv])cnt++;
                u--;uv--;
            }
            res+=cnt;
        }
    }

    cout<<res/2<<endl;
    //printf("%d\n",res/2);
    return 0;
}
