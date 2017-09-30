#include<bits/stdc++.h>
using namespace std;
int tree[100000],n;
void update(int idx,int vl)
{
    while(idx<=n)
    {
        tree[idx]+=vl;
        idx+=idx&(-idx);
    }
}
int qry(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=idx&(-idx);
    }
    return sum;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        update(x,1);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int in;
        cin>>in;
        cout<<qry(in)<<endl;
    }


    return 0;
}
