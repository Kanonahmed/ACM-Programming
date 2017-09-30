#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,t,n,a[15];
    cin>>tc;
    t=1;
    while(tc--)
    {
        int sum=0;
        cin>>n;
        //cin>>a[0];
        int nor=2,p;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            p=a[i]-nor;
            if(p>=5)
            {
                sum+=p/5;
                if(p%5!=0)
                sum++;
            }
            else if(p>0)
            sum++;
            nor=a[i];
        }
        cout<<"Case "<<t<<": "<<sum<<endl;
        memset(a,0,sizeof a);
        t++;
    }


    return 0;
}
