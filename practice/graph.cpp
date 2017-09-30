#include<bits/stdc++.h>
using namespace std;
int matrix[100][100];
int vis[100];

int main()
{
    vector<int>edge[100];
    vector<int>cost[100];
    int node,E;
    cin>>node>>E;
    for(int i=1;i<=E;i++)  //// vector implementation
    {
        int x,y,cst;                //// i always use vector implementation
        cin>>x>>y>>cst;
        edge[x].push_back(y);
       // edge[y].push_back(x);
        cost[x].push_back(cst);
        //cost[y].push_back(cst);
    }
    for(int i=1;i<=E;i++)
    {
        int x=edge[i].size();
        cout<<x<<" ";
        for(int j=0;j<edge[i].size();j++)
        cout<<edge[i][j];
        cout<<endl;
    }
//    int u;
//    cin>>u;
//    for(int i=0;i<edge[u].size();i++)
//    cout<<edge[u][i]<<" "<<cost[u][i]<<endl;
//    int xx=edge.size();
//int matrix[100][100];
//for(int i=0;i<edge;i++)   //// matrix implementation
//{
//    int x,y,cost;
//    cin>>x>>y>>cost;
//    matrix[x][y]=cost;
//    matrix[y][x]=cost;
//}
//for(int i=0;i<node;i++)
//{
//    for(int j=0;j<node;j++)
//    cout<<matrix[i][j];
//    cout<<endl;
//}

    return 0;
}
