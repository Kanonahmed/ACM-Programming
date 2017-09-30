#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<queue>
#include<fstream>
#include<sstream>
#include<stack>
#include<list>
#include<deque>
#include<bitset>
#include<utility>
#include<climits>
#include<iomanip>
#include<ctime>
#include<complex>
#include<set>

using namespace std;


#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#define inf INT_MAX/3
#define INF INT_MAX/3
#define PB push_back
#define pb push_back
#define MP make_pair
#define mp make_pair
#define ALL(a) (a).begin(),(a).end()
#define all(a) (a).begin(),(a).end()
#define SET(a,c) memset(a,c,sizeof a)
#define CLR(a) memset(a,0,sizeof a)
#define PII pair<int,int>
#define pcc pair<char,char>
#define pic pair<int,char>
#define pci pair<char,int>
#define VS vector<string>
#define VI vector<int>
#define debug(x) cout<<#x<<": "<<x<<endl
#define MIN(a,b) (a>b?b:a)
#define MAX(a,b) (a>b?a:b)
#define pi 2*acos(0.0)
#define INFILE() freopen("in0.txt","r",stdin)
#define OUTFILE()freopen("out0.txt","w",stdout)
#define in scanf
#define out printf
#define LL long long
#define ll long long
#define ULL unsigned long long
#define ull unsigned long long
#define eps 1e-14
#define MOD 1000000007


//TYO conversion
template<typename T>inline string toString(T a)
{
    ostringstream os("");
    os<<a;
    return os.str();
}
template<typename T>inline ll toLong(T a)
{
    ll res;
    istringstream os(a);
    os>>res;
    return res;
}
//MATHEMATICS
template<typename T>inline T  S(T a)
{
    return a*a;
}
template<typename T>inline T gcd(T a, T b)
{
    if (b == 0)return a;
    else return gcd(b, a % b);
}
template<typename T>inline ull bigmod(T a, T b, T m)
{
    if (b == 0)return 1;
    else if (b % 2 == 0)return S(bigmod(a, b / 2, m)) % m;
    else return (a % m*bigmod(a, b - 1, m)) % m;
}
template<typename T>inline VS parse(T str)
{
    VS res;
    string s;
    istringstream os(str);
    while(os>>s)res.pb(s);
    return res;
}
template<typename T>inline ull  dist(T A,T B)
{
    ull res=(A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y);
    return res;
}
template<typename T>inline double cosAngle(T a,T b,T c)
{
    double res=a*a+b*b-c*c;
    res=res/(2*a*b);
    res=acos(res);
    return res;
}
template<typename T>inline T power(T base,int po)
{
    T res=1;
    if(base==0)return 0;
    FOR(i,0,po)res*=base;
    return res;
}
//BIT
template<typename T>inline bool isOn(T mask,T pos)
{
    return mask&(1<<pos);
}
template<typename T>inline int Off(T mask,T pos)
{
    return mask^(1<<pos);
}
template<typename T>inline int On(T mask,T pos)
{
    return mask|(1<<pos);
}
#define Mx 1005
LL dp1[Mx][Mx];
LL dp2[Mx][Mx];
LL memo1[Mx][Mx];
LL memo2[Mx][Mx];
LL INFI ;
int mat[Mx][Mx];

int N,M;


//right 2 , down 1
LL solve1(int x, int y)
{


    if(x==N && y==M)
    {
        dp1[x][y]=mat[x][y];
        return dp1[x][y];
    }

    if( dp1[x][y]!=-1)return     dp1[x][y];
    dp1[x][y] =-INFI;

    if(x<N)
        dp1[x][y]=solve1(x+1,y)+mat[x][y];
    if(y<M)
        dp1[x][y]=MAX(    dp1[x][y],solve1(x,y+1)+mat[x][y]);

    return dp1[x][y];

}


// up 1, left 2
LL solve2(int x, int y)
{



    if(x==1 && y==1)
    {
        dp2[x][y]=mat[x][y];
        return dp2[x][y];
    }



    if(    dp2[x][y]!=-1)return     dp2[x][y];
    dp2[x][y]=-INFI;
    if(x-1>0)
        dp2[x][y]=solve2(x-1,y)+mat[x][y];
    if(y-1>0)
        dp2[x][y]=MAX(    dp2[x][y],solve2(x,y-1)+mat[x][y]);

    return dp2[ x][y];

}


// n 1 to 1 m // up 1, right 2
LL fun(int x, int y )
{
    if(x==1 && y==M )
    {
        memo1[x][y]=mat[x][y];
        return memo1[x][y];
    }
    if(memo1[x][y]!=-1)return memo1[x][y];

    memo1[x][y]=-INFI;

    if(x-1>0)
        memo1[x][y]=fun(x-1,y)+mat[x][y];
    if(y<M)
        memo1[x][y]=MAX(memo1[x][y],fun(x,y+1)+mat[x][y]);

    return memo1[x][y];

}
// 1 m to n 1  // 1 for down 2 for left
LL rec(int x, int y )
{
    if(x==N && y==1 )
    {
        memo2[x][y]=mat[x][y];
        return memo2[x][y];
    }

    if(memo2[x][y]!=-1)return memo2[x][y];
    memo2[x][y]=-INFI;
    if(x<N)
        memo2[x][y]=rec(x+1,y)+mat[x][y];
    if(y-1>0)
        memo2[x][y]=MAX(memo2[x][y],rec(x,y-1)+mat[x][y]);

    return memo2[x][y];

}




int main()
{
    INFI =100000000;
    INFI*=INFI;
    int i,j,k;
    int ks,cas,n,m;
    cin>>n>>m;

    N=n;
    M=m;
    int xx,yy;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    SET(dp1,-1);
    SET(dp2,-1);
    SET(memo2,-1);
    SET(memo1,-1);

    solve1(1,1);
    solve2(n,m);
    fun(n,1);
    rec(1,m);


    LL res=-100000;
    for(i=1; i<=n; i++)
    {

        for(j=1; j<=m; j++)
        {
           // xx=abs(1-i)+abs(1-j);
           // yy=abs(n-i)+abs(1-j);

            //if(xx==yy)

            if(i-1>=1 && i+1<=N && j-1>=1 && j+1<=M )
            {
                res=MAX(res, dp2[i-1][j]+dp1[i+1][j]+memo1[i][j+1]+memo2[i][j-1]  );
                res=MAX(res, memo1[i-1][j]+memo2[i+1][j]+dp1[i][j+1]+dp2[i][j-1]  );
            }
        }
    }
    cout<<dp1[1][1]<<" "<<dp2[n][m]<<endl;
    cout<<memo1[n][1]<<" "<<memo2[1][m]<<endl;
    cout<<res<<endl;

    return 0;
}
