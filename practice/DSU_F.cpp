#include<bits/stdc++.h>
using namespace std;
set<int>s[110];
string pp;
int vis[110];
int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int m,tr;
//        cin>>m>>tr;
        scanf("%d%d", &m, &tr);
        getchar();
        while(getline(cin,pp))
        {
            if(pp.size()==0)break;
            stringstream ss;
            int x, y;
            ss<<pp;
            ss>>x;
            ss>>y;
            s[x].insert(y);
        }
//        getchar();
        int res=0;
        for(int i=1; i<=m; i++)
        {
            if(!vis[i])
            {
                res++;
                for(int j=i+1; j<=m; j++)
                {
                    if(s[i]==s[j])
                    {
                        vis[j]=1;
                    }
                }
            }
        }
        cout<<res<<endl;
        if(tc) cout<<endl;
        for(int i=0; i<110; i++)s[i].clear();
        memset(vis,0,sizeof vis);
    }
    return 0;
}
