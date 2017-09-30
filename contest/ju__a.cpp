#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[55];
    while(cin>>n>>t)
    {
        int k=0;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(sum<=t)
            {
                k++;
            }
        }
        cout<<k<<endl;
        memset(a,0,sizeof a);

    }
    return 0;
}
