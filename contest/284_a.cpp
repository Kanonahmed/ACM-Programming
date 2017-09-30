#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    pair<int,int> p[55];
    long long sum=0;
    cin>>n>>x;
    cin>>p[0].first>>p[0].second;
    sum+=p[0].second-p[0].first+1+(p[0].first-1)%x;
    for(int i=1; i<n; i++)
    {
        cin>>p[i].first>>p[i].second;
        int g=(p[i].first-p[i-1].second-1)%x;
        if(g<0)g=0;
        int pp=p[i].second-p[i].first+1;
        sum=sum+pp+g;
    }
    cout<<sum<<endl;

    return 0;
}
