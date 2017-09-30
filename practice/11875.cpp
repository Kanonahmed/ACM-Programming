#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
   int n;
   int a[10000];
   cin>>n;
   for(int i=1;i<=n;i++)
    cin>>a[i];
   sort(a+1,a+(n+1));
   printf("Case %d: ",t);
   cout<<a[n/2+1]<<endl;
   t++;
    }
    return 0;
}
