#include<bits/stdc++.h>
using namespace std;
int p[2000003];
int q[2000003];
int main()
{

    int n,j,i,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //int x,y;
        cin>>x>>y;
        p[x]=y;
        q[x]++;
        q[y]--;
    }
    i=0;
   while(true)
   {
       if(q[i]==1)
       break;
       i++;
   }
   j=p[0];
   while(i&&j)
   {
       cout<<i<<" "<<j<<" ";
       i=p[i];
       j=p[j];
   }
   if(i)
   cout<<i;

    return 0;
}
