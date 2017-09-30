#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[15],b[15];
    int tc,t;
    cin>>tc;
    t=1;
    while(tc--)
    {
        //cin>>n;
        scanf("%d",&n);
        int i=0;
        while(n)
        {
            int rem=n%10;
            a[i]=rem;
            b[i]=rem;
            n=n/10;
            i++;
        }
        reverse(b,b+i);
        int flag=1;
        for(int j=0; j<i; j++)
        {
            if(a[j]!=b[j])
                flag=0;
            // cout<<a[j]<<" "<<b[j]<<endl;
            //cout<<a[j]<<endl;
        }
        if(flag)
            printf("Case %d: Yes\n",t);
        else
            printf("Case %d: No\n",t);
        t++;
    }
    return 0;
}
