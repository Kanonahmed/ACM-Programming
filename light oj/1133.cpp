#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int n,m,tc,t,f;
    long long arr[101];
    char op;
    cin>>tc;
    t=1;
    while(tc--)
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        while(m)
        {
            cin>>op;
            if(op=='R')
            {
                reverse(arr,arr+n);
            }
            else if(op=='S')
            {
                int d;
                cin>>d;
                for(int k=0; k<n; k++)
                {
                    arr[k]=arr[k]+d;
                }
            }
            else if(op=='M')
            {
                int d;
                cin>>d;
                for(int k=0; k<n; k++)
                {
                    arr[k]=arr[k]*d;
                }
            }
            else if(op=='D')
            {
                int d;
                cin>>d;
                for(int k=0; k<n; k++)
                {
                    arr[k]=arr[k]/d;
                }
            }
            else if(op=='P')
            {
                int x,y;
                cin>>x>>y;
                swap(arr[x],arr[y]);
            }
            m--;
        }
        printf("Case %d:\n",t);
        for(int i=0; i<n; i++)
        {
            printf("%lld",arr[i]);
            if(i<n-1)
                printf(" ");
        }
        cout<<endl;
        t++;
    }
    return 0;
}
