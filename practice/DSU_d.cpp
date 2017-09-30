#include<bits/stdc++.h>
using namespace std;
int rep[50005];
int find(int x)
{
    if(rep[x]==x)return x;
    else return rep[x]=find(rep[x]);
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        getchar();
        for(int i=1; i<=n; i++)rep[i]=i;
        char s;
        int yes=0,no=0;
        while(scanf("%c",&s)==1)
        {
            if(s=='\n')break;
            int a,b;
            cin>>a>>b;
            getchar();
            int u=find(a);
            int v=find(b);
            if(s=='c')
            {
                if(u!=v)rep[v]=u;
            }
            else
            {
                if(u==v)yes++;
                else no++;
            }
        }
       cout<<yes<<","<<no<<endl;
        if(tc)cout<<endl;
    }


    return 0;
}
