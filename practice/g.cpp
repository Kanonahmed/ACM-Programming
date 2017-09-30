#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
int main()
{
    int tc,t,a,b,c,f,s;
    cin>>tc;
    while(tc)
    {
        cin>>a>>b>>c>>f>>c;
        if(a==0&&b==0&&c==0)
         printf("Case %d: Invalid Triangle\n",t);
        else if(a!=b &&b!=c)
        printf("Case %d: Invalid Triangle\n",t);
     tc--;
     t++;
    }

    return 0;
}
