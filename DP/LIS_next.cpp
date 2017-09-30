#include<bits/stdc++.h>
using namespace std;
int ar[100000],ind[100000],l[100000],n;
void LCS()
{
    ind[0]=-10000000;
    for(int i=1;i<=n;i++)ind[i]=10000000;
    int best=1;
    for(int i=1;i<=n;i++)
    {
        int low=0,heigh=n,midle;
        while(low<=heigh)
        {
            midle=(low+heigh)/2;
            if(ar[i]>ind[midle])low=midle+1;
            else if(ar[i]<ind[midle])heigh=midle-1;
            else {low=midle;break;}
        }
        ind[low]=ar[i];
        l[i]=low;
        if(low>best)best=low;
    }
    cout<<"LIS length "<<best<<endl;
    for(int i=n;i>=1;i--)
    {
        if(l[i]==best)
        {
            cout<<ar[i]<<" ";
            best--;
        }
    }
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)cin>>ar[i];
  LCS();

    return 0;
}

