#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long fact[22];
    fact[0]=1;
    for(int i=1; i<=20; i++)fact[i]=fact[i-1]*i;
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        vector<int>v;
        for(int i=20; i>=0; i--)
        {
            if(n>=fact[i])
            {
                n-=fact[i];
                v.push_back(i);
            }
        }
        if(n)printf("Case %d: impossible\n",t++);
        else
        {
            printf("Case %d: ",t++);
            reverse(v.begin(),v.end());
            for(int i=0; i<v.size(); i++)
            {
                printf("%d!",v[i]);
                if(i<v.size()-1)cout<<"+";
            }
            cout<<endl;
        }
    }

    return 0;
}
