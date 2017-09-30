#include<bits/stdc++.h>
using namespace std;
bool vis[10003];
int prm[10003],k;
void pr()
{
    k=1;
    prm[k++]=2;
    for(int i=3;i<=10000;i+=2)
        if(!vis[i])
    {
        vis[i]=1;
        prm[k++]=i;
        for(int j=2*i;j<=10000;j+=i)vis[j]=1;
    }
    prm[0]=0;
    for(int i=1;i<k;i++)prm[i]=prm[i-1]+prm[i];
}
int main()
{
    pr();
   int n;
   while(cin>>n&&n)
   {
       int id;
       for(int i=1;i<k;i++)if(prm[i]>=n){id=i;break;}
        int cnt=0;
       for(int j=id;j<k;j++)
       {
           int l=0,h=j;
           while(l<=h)
           {
              int md=(l+h)/2;
              int vl=prm[md];
              if((prm[j]-vl)==n)
              {
                  cnt++;
                  break;
              }
              else if((prm[j]-vl)>n)
              {
                  l=md+1;
              }
              else h=md-1;
           }
       }

       cout<<cnt<<endl;
   }


    return 0;
}
