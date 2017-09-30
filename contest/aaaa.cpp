#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll nbr[11],n,a,b,c,x,y,m;
//    cin >> n >> m;
//    for(i=0;i<n;i++)
//    {
//        cin >> x;
//        nbr[x%10]++;
//    }

    n = 1<<9;
    for(i=1;i<n;i++)
    {
        a = i;

        for(j=0;j<=9;j++)
        {
            if(a&(1<<j)) tk[j]=1;
            else tk[j]=0;
        }
        for(j=0;j<=9;j++)
        {

        }
    }
    return 0;
}
