#include<bits/stdc++.h>
using namespace std;
struct data
{
    int x,y;
};
data st[55];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>st[i].x>>st[i].y;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(st[i].x<st[j].x)
            {
                int tmp=st[j].x;
                st[j].x=st[i].x;
                st[i].x=tmp;
                int tp=st[j].y;
                st[j].y=st[i].y;
                st[i].y=tp;
            }
            else if(st[i].x==st[j].x)
            {
                if(st[i].y>st[j].y)
                {
                    int tmp=st[j].x;
                    st[j].x=st[i].x;
                    st[i].x=tmp;
                    int tp=st[j].y;
                    st[j].y=st[i].y;
                    st[i].y=tp;
                }
            }

        }
    }
//    for(int l=1;l<=n;l++)
//    cout<<st[l].x<<" "<<st[l].y<<endl;
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(st[i].x==st[k].x&&st[i].y==st[k].y)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
