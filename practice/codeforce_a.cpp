#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,rem,n,a[9],sum,k,flag,add,max,p;
    cin>>n;
    max=n;
    k=1;
    while(1)
    {
        p=max+k;
        i=0;
        while(p!=0)
        {
            rem=p%10;
            a[i]=rem;
            p=p/10;
            i++;
        }
        flag=0;
        for(int j=0; j<i; j++)
        {
            if(a[j]==8||a[j]==-8)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<k;break;
        }
        k++;
    }
    return 0;
}
