#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<utility>
#include<string>
#include<cstring>
#include<cmath>
#define MPI map<int,int>
#define PRI pair<int,int>
#define VI vector<int>
#define STI stack<int>
#define QI queue<int>
#define PI 2*acos(0.0)
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define ll long long
#define eps 1e-9
#define P 10000
template<class T> T SQR(T X)
{
    return X*X;
}
template<class T> T GCD(T a, T b)
{
    if(b==0)return a;
    else return GCD(b,a%b);
}
template<class T> T LCM(T a,T b)
{
    return (a*b)/(GCD(a,b));
}
template<class T> T MOD(T a,T b)
{
    if(a>0) return a%b;
    else return (a%b+b)%b;
}
template<class T> T BIGMOD(T b,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0) return (BIGMOD(b,p/2,m)%m*BIGMOD(b,p/2,m)%m)%m;
    else return ((b%m)*BIGMOD(b,p-1,m)%m)%m;
}
using namespace std;
const int N=10000;
int vis[30][30],r,c,cnt;
string s[30];
void fill(int x,int y)
{
    if(x>=0&&x<r&&y>=0&&y<c)
    {
        if((s[x][y]=='.'||s[x][y]=='@')&&vis[x][y]==0)
        {
            cnt++;
            vis[x][y]=1;
            fill(x+1,y);
            fill(x-1,y);
            fill(x,y+1);
    int tc,t;
    cin>>tc;
    t=1;
            fill(x,y-1);
        }
    }
    else return ;
}

int main()
{
    while(tc--)
    {
        int rr,cc;
        cin>>c>>r;
        for(int i=0; i<r; i++)
        {
            cin>>s[i];
            for(int j=0; j<c; j++)
            {
                if (s[i][j]=='@')
                {
                    rr=i;
                    cc=j;
                }

            }
        }

        cnt=0;
        fill(rr,cc);
        printf("Case %d: %d\n",t,cnt);
        t++;
        for(int i=0; i<r; i++)
            s[i].clear();
        memset(vis, 0, sizeof vis);
    }
    return 0;
}
