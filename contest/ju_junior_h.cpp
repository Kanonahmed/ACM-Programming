#include<bits/stdc++.h>
#define xx first
#define yy second
using namespace std;
int main()
{
    pair<string,string>p[1005];
    pair<string,string>pp;
    vector<pair<string,string> >v;
    int t[1005],d,n;
    cin>>n>>d;
    for(int i=0; i<n; i++)
        cin>>p[i].xx>>p[i].yy>>t[i];
    int cnt=0;
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(p[i].xx!=""){
         flag=0;
        for(int j=0; j<n; j++)
        {
            if(i==j)continue;
            if(p[j].xx==p[i].yy&&p[j].yy==p[i].xx&&(t[j]-t[i])>0&&(t[j]-t[i])<=d)
            {
                v.push_back(make_pair(p[i].xx,p[i].yy));
                cnt++;
                flag=1;
                break;
            }
        }
    }
        if(flag==1)
        {
            for(int k=i+1; k<n; k++)
            {
                if(p[i].xx==p[k].xx&&p[i].yy==p[k].yy)
                {
                    p[k].xx="";
                    p[k].yy="";
                }
                else if(p[i].xx==p[k].yy&&p[i].yy==p[k].xx)
                {
                    if(p[i].xx==p[k].xx&&p[i].yy==p[k].yy)
                    {
                        p[k].xx="";
                        p[k].yy="";
                    }
                }
            }
        }
    }

    cout<<cnt<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i].xx<<" "<<v[i].yy<<endl;

    return 0;
}
