#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        int p,l,n;
        vector<int>v;
        cin>>p>>l;
        n=p-l;
        if(n<l){printf("Case %d: impossible\n",t++);continue;}
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(p%i==l)
                v.push_back(i);
                if(i!=n/i&&p%(n/i)==l)v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
        printf("Case %d:",t++);
        if(v.size())
            for(int i=0;i<v.size();i++)printf(" %d",v[i]);
        else printf(" impossible");
        printf("\n");
    }
    return 0;
}
