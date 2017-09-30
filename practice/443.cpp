#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,p;
    int ar[6000];
    int x,y,z,s,m,n;
    ar[0]=1;
    n=0;
    while(n<5845)
    {
        x=ar[a]*2;
        y=ar[b]*3;
        z=ar[c]*5;
        s=ar[d]*7;
        m=min(min(min(x,y),z),s);
        if(m==x)
        {
            a++;
        }
        if(m==y)
        {
            b++;
        }
        if(m==z)
        {
            c++;
        }
        if(m==s)
        {
            d++;
        }
        n++;
        ar[n]=m;
    }
    while(cin>>p)
    {
        if(p==0)
        break;
        else if(p%10==1&&(p/10)%10!=1)
        {
            printf("The %dst humble number is %d.\n",p,ar[p-1]);
        }
        else if(p%10==2&&(p/10)%10!=1)
        {
            printf("The %dnd humble number is %d.\n",p,ar[p-1]);

        }
        else if(p%10==3&&(p/10)%10!=1)
        {
            printf("The %drd humble number is %d.\n",p,ar[p-1]);
        }
        else
        {
            printf("The %dth humble number is %d.\n",p,ar[p-1]);

        }
    }
    return 0;
}
