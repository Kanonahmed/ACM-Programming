#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
int vis[200009],ss;
int bfs(int st,int ed)
{
    queue<pp>q;
    q.push(pp(st,0));
    while(!q.empty())
    {
        pp top=q.front();
        q.pop();
        int cn=top.first;
        int cc=top.second;
//        cout<<cn<<" "<<cc<<endl;
        if(vis[cn])continue ;
        vis[cn]=1;
        if(cn==ed){
            //ss=cc;
            return cc;
        }
        if((cn*2)<=100000)
            q.push(pp(cn*2,cc+1));
        if((cn-1)>=0)
            q.push(pp(cn-1,cc+1));
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<bfs(n,m)<<endl;
   //cout<<ss<<endl;

    return 0;
}
