#include<bits/stdc++.h>
using namespace std;
int main()
{

    int h,m,tc;
    cin>>tc;
    while(scanf("%d:%d",&h,&m)==2)
    {
        if(h<12)
        {
            if(m!=0)
            {
                h=12-h-1;
                m=60-m;
            }
            else
                h=12-h;
            m=m;

        }
        else
        {
            if(m!=0)
            {
                h=11;
                m=60-m;
            }
            else
            {
                m=m;
                h=12;
            }
        }
        if(h==0)
            h=12;
        if(h<10)
        {
            if(m<10)
                printf("0%d:0%d\n",h,m);
            else
                printf("0%d:%d\n",h,m);
        }
        else
        {
            if(m<10)
                printf("%d:0%d\n",h,m);
            else
                printf("%d:%d\n",h,m);
        }
    }
    return 0;
}
