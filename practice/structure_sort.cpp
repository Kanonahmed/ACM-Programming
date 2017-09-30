#include<bits/stdc++.h>
using namespace std;
string ss;
struct d
{
    int a,b;
    bool operator <(const d &p)const
    {
        if(a<p.a)return true;
        else if(a==p.a&&b<p.b)return true;
        return false;
    }
};
int main()
{
    vector<d>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){int x,y;cin>>x>>y;v.push_back({x,y});}
     sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)cout<<v[i].a<<" "<<v[i].b<<endl;


    /*

    string s;
struct d
{
    int id,p,c,f,t;
};
 bool cmp(d a,d pp)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='P'&&a.p!=pp.p)return a.p>pp.p;
            if(s[i]=='p'&&a.p!=pp.p)return a.p<pp.p;
            if(s[i]=='C'&&a.c!=pp.c)return a.c>pp.c;
            if(s[i]=='c'&&a.c!=pp.c)return a.c<pp.c;
            if(s[i]=='F'&&a.f!=pp.f)return a.f>pp.f;
            if(s[i]=='f'&&a.f!=pp.f)return a.f<pp.f;
            if(s[i]=='T'&&a.t!=pp.t)return a.t>pp.t;
            if(s[i]=='t'&&a.t!=pp.t)return a.t<pp.t;
        }
        return a.id<pp.id;
    }
vector<d>st;
for(int i=0;i<dietPlans.size();i++)
        {
            s=dietPlans[i];
            sort(st.begin(),st.end(),cmp);
            res.push_back(st[0].id);
        }
        */

    return 0;
}
