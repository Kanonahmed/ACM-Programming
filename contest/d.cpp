#include<bits/stdc++.h>
using namespace std;
int bb[105];
int gg[105];
int main()
{
  int n,m,b,g;
  cin>>n>>m;
  cin>>b;
  for(int i=0;i<b;i++)
  {
      int x;cin>>x;
      bb[x]=1;
  }
  cin>>g;
  for(int i=0;i<g;i++)
  {
//      int y;
      cin>>y;gg[y]=1;
  }
  //cout<<n<<" "<<m<<" "<<b<<" "<<g;
  if(b==0&&g==0){cout<<"No"<<endl;return 0;}
  int mx=max(n,m);
  int mn=min(n,m);
  if((mx-mn)>mn||(mx-mn)==mn){cout<<"No"<<endl;return 0;}
   cout<<"Yes"<<endl;


    return 0;
}
