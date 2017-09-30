#include<bits/stdc++.h>
using namespace std;
int md;
int vis[1000];
int go(int u)
{
    if(u==0)return 0;
    int r=(go(u/2))*10+u%2;
    //md=md*10+u%2;
    //printf("%d\n",md);
    return r;
}
int main()
{
  int n;
  cin>>n;
   cout<<go(n)<<endl;
   //cout<<vis[n]<<endl;
    return 0;
}
