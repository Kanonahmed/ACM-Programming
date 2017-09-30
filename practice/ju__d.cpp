#include<bits/stdc++.h>
using namespace std;
int a[10],k;
int mask(int x)
{
    int sum=0,k=0;
    while(x)
    {
        int rem=x%10;
        //sum=sum*10+rem;
        if(rem==4||rem==7)
        a[k++]=rem;
        x=x/10;
    }
    reverse(a,a+k);
    for(int i=0;i<k;i++)
    sum=sum*10+a[i];
    return sum;
}
int main()
{
    int a,b,i;
    cin>>a>>b;
    i=a+1;
    while(1)
    {
        int s=mask(i);
        if(s==b)
        {
            cout<<i<<endl;
            return 0;
        }
        i++;
    }

    return 0;
}
