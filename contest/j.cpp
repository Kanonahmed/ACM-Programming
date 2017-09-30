#include<bits/stdc++.h>
using namespace std;
struct data
{
    int x,y;
    data(int _x,int __x){x=_x;y=__x;}
    bool operator <(const data &p)const
    {
        if(x<p.x)return 1;
        else if(x==p.x&&y<p.y)return 1;
        return 0;
    }
};
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<data>v;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back(data(x,y));
        }

        sort(v.begin(),v.end());

        //int s=(v[0].x-v[n/2].x)*(v[0].x-v[n/2].x)+(v[0].y-v[n/2].y)*(v[0].y-v[n/2].y);
        //s=sqrt(s);
        //cout<<s<<endl;
        //if(n==1){cout<<"0"<<endl;continue;}
        int ans=100000000;
        for(int i=0;i<=n/2;i++)
        {
            int l=i+n/2;
            //cout<<i<<" "<<l<<endl;
            int xd=v[l].x-v[i].x;
            int mx=-1000000,mn=100000;
            for(int k=i;k<=l;k++)
            {
                mx=max(mx,v[k].y);
                mn=min(mn,v[k].y);

            }
            int yd=mx-mn;
            int pp=xd*xd+yd*yd;
            pp=sqrt(pp);
            ans=min(ans,pp);

        }

        cout<<ans<<endl;

    }



 return 0;
}
