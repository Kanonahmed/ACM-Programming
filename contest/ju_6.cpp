#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    int aa,bb,cc,dd,ee;
    while(scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&aa,&bb,&cc,&dd,&ee)==10)
    {
        int flag=0;
        if(a!=aa)
        {
            if(b!=bb)
            {
                if(c!=cc)
                {
                    if(d!=dd)
                    {
                        if(e!=ee)
                        {
                            flag=1;
                        }
                    }
                }
            }
        }
        if(flag)cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }

    return 0;
}
