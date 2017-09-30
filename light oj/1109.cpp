#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>p;
bool vis[1005];
struct z
{
    int n,cnt;
    z(int _x,int _y){n=_x;cnt=_y;}
    bool operator < (const z &p)const
    {
        if(cnt<p.cnt)return true;
        else if(cnt==p.cnt&&n>p.n)return true;
        return false;
    }
};
vector<z>v;
void seive()
{
    p.push_back(2);
    for(int i=3;i<=1000;i+=2)
    {
        if(!vis[i])
        {
            vis[i]=1;
            p.push_back(i);
            for(int j=3*i;j<=1000;j+=i)vis[j]=1;
        }
    }
}
int main()
{
    seive();
    //v.push_back(z(1,1));
    for(int i=1;i<=1000;i++)
    {
        int x=i;
        int res=1;
        for(int j=0;p[j]<=sqrt(x)&&j<p.size();j++)
        {
            if(x%p[j]==0){
                    int c=0;
                while(x%p[j]==0)c++,x/=p[j];
                res*=(c+1);
            }
        }
        if(x>1)res*=2;
        v.push_back(z(i,res));
    }
    sort(v.begin(),v.end());
   // for(int i=0;i<=10;i++)
       // cout<<v[i].n<<" ";
   int tc,t=1;
   cin>>tc;
   while(tc--)
   {
       int pos;
       cin>>pos;
       pos--;
       cout<<"Case "<<t++<<": "<<v[pos].n<<endl;
   }

    return 0;
}
