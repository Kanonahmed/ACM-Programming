#include<bits/stdc++.h>
#define ll long long
using namespace std;
queue<long long>q;
int  a[10000000];
int k=0;
ll N=1000000000;
void bfs()
{
    q.push(4);
    q.push(7);
    while(!q.empty())
    {
        long long u=q.front();
        q.pop();
        a[k++]=u;
        long long v=u*10+4;
        if(v<=N)
        {
            q.push(v);
        }
        long long v1=u*10+7;
        if(v1<=N)
        {
            q.push(v1);
        }
    }

}
int main()
{
    bfs();
    sort(a,a+k);
    int n;
    cin>>n;
    for(int i=0; i<k; i++) //cout<<a[i]<<" ";
    {
        if(n==a[i])cout<<i+1<<endl;
    }
    return 0;
}
