#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL p[4005],v[4005],d[4005];
vector<int>ans;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>v[i]>>d[i]>>p[i];
    for(int i=0;i<n;i++)
    {
        if(p[i]>=0)
        {
            ans.push_back(i+1);
            int k=i+1;
            while(v[i]>0)
            {
                v[i]--;
                p[k]=p[k]-v[i];
                k++;
                if(n==k)break;
            }
        }
        else
        {
            for(int j=i+1;j<n;j++)
            {
                p[j]=p[j]-d[i];
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";

    return 0;
}
