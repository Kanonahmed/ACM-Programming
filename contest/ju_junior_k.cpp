#include<bits/stdc++.h>
using namespace std;
struct data
{
    int x,y;
};
data st[205];
int main()
{
    int n,a[203];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>st[i].x>>st[i].y;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        int l=0,r=0,u=0,low=0;
        for(int j=0; j<n; j++)
        {
            if(i==j)continue;
            if(st[j].x>st[i].x&&st[j].y==st[i].y)
                r++;
            if(st[j].x<st[i].x&&st[j].y==st[i].y)
                l++;
            if(st[j].x==st[i].x&&st[j].y>st[i].y)
                u++;
            if(st[j].x==st[i].x&&st[j].y<st[i].y)
                low++;
            if(l!=0&&u!=0&&low!=0&&r!=0)
                break;
        }
        if(l!=0&&u!=0&&low!=0&&r!=0)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
