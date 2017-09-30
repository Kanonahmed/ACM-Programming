#include<bits/stdc++.h>
using namespace std;
const int N=1000009;
int vis[N];
int a[N],res;
queue<int>q;
vector<int>v;
int cal()
{
    q.push(1);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        int x=u*10;
        v.push_back(u);
        if(x<=N)q.push(x);
        int y=u*10+1;
        if(y<=N)q.push(y);
    }
}
int main()
{
    cal();
    sort(v.begin(),v.end());
    int n;
    cin>>n;
    vector<int>s,r;
    int sum=0;
    int h=n;
    for(int l=0; l<=h; l++)
    {
        int p=n;
        int k;
        int flag=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]>p)
            {
                k=i-1;
                flag=1;
                break;
            }
        }
        if(flag)
        {
            for(int j=0; j<p/v[k]; j++)
            {
                s.push_back(v[k]);

            }
            sum+=p/v[k];
            n=p%v[k];
        }

        if(!n){break;}
    }
 cout<<sum<<endl;
 for(int m=0;m<s.size();m++)cout<<s[m]<<" ";
    return 0;
}
