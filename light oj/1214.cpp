#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[205];
    //int now;
    long long b,now;
    int tc,t,l;
    cin>>tc;
    t=1;
    while(tc--)
    {
        //cin>>a>>b;
        scanf("%s %lld",&a,&b);
        l=strlen(a);
        now=0;
        if(b<0)b=b*(-1);
        for(int i=0; i<l; i++)
        {
            if(a[i]=='-') continue;
            now=now*10+a[i]-'0';
            now=now%b;
            //cout<<now<<endl;
        }
        if(now==0)
            printf("Case %d: divisible\n",t);
        else
            printf("Case %d: not divisible\n",t);
        //a="";
        memset(a,'0',sizeof a);
        t++;
    }

}
