#include<iostream>
#include<queue>
#include<cstring>
#include<cstdio>
using namespace std;
int a[1000002];
struct data
{
    int vl,id;
    data(int a,int b)
    {
        vl=a;
        id=b;
    }
    bool operator< (const data& p)const
    {
        return vl>p.vl;
    }
//    bool friend operator<(data x,data y)
//    {
//        return x.vl>y.vl;
   // }
};
priority_queue<data>q;
priority_queue<pair<int ,int> >qe;
int main()
{
    int n,k;
    //cin>>n>>k;
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++)//cin>>a[i];
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
    {
        q.push(data(a[i],i));
        if(i>=k-1)
        {
            while(i-q.top().id>k-1)
            {
                q.pop();
            }
            //cout<<q.top().vl<<" ";
            printf("%d ",q.top().vl);
        }
    }
    //cout<<endl;
    puts("");
    for(int i=0; i<n; i++)
    {
        qe.push(make_pair(a[i],i));
        if(i>=k-1)
        {
            while(i-qe.top().second>k-1)
            {
                qe.pop();
            }
           // cout<<qe.top().first<<" ";
           printf("%d ",qe.top().first);
        }
    }
    return 0;
}
