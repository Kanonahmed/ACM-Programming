/// *********************************************** K
/// B *                                           * H
/// I *    Solved By : Bir Bahadur Khatri(B'ru)   * A
/// R *      Be Positive,be Happy.                * T
/// U *                                           * R
/// *********************************************** I

#include<bits/stdc++.h>

#define LL long long int
#define ULL unsigned LL
#define PI 2.0*acos(0.0)
#define D double
#define sz size()
#define PB push_back
#define cp printf("***** here here here here *****\n");
#define NL printf("\n")
#define CHR getchar()
#define SQR(n) (n*n)
#define MEM(a,val) memset(a,val,sizeof(a))
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))
#define S1(a) a=in<int>()
#define S2(a,b) a=in<int>(),b=in<int>()
#define S3(a,b,c) a=in<int>(),b=in<int>(),c=in<int>()
#define SL1(a) a=in<LL>()
#define SL2(a,b) a=in<LL>(),b=in<LL>()
#define SL3(a,b,c) a=in<LL>(),b=in<LL>(),c=in<LL>()
#define F(i,a,b) for(int i=a;i<b; i++)
#define R(i,a,b) for(int i=a-1;i>=b; i--)
#define all(a) a.begin(),a.end()
#define cnt_bit(a) __builtin_popcountll(a)
#define InpOut freopen("A.in","r",stdin),freopen("A1.out","w",stdout)
#define _cin ios_base::sync_with_stdio(0)
#include <time.h>

using namespace std;
template <typename T> T in(){char ch;T n = 0;bool ng = false;while (1){ch = getchar();if (ch == '-'){ng = true;ch = getchar();break;}if (ch>='0' && ch<='9')     break;}while (1){n = n*10 + (ch - '0');ch = getchar();if (ch<'0' || ch>'9')   break;}return (ng?-n:n);}
template<typename T>inline T Dist(T x1,T y1,T x2, T y2){return sqrt( SQR(x1-x2) + SQR(y1-y2) );}
template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
template<typename T>inline T ABS(T a) {if(a<0)return -a;else return a;}
template<typename T>inline T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
template<typename T>inline T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
long long Bigmod(long long base, long long power, long long MOD){long long ret=1;while(power){if(power & 1)ret=(ret*base)%MOD;base=(base*base)%MOD;power>>=1;}return ret;}
long long ModInverse(long long number, long long MOD){return Bigmod(number, MOD-2, MOD);}
int Set(int N,int pos){ return N=N | (1<<pos);}
int Reset(int N,int pos){return N= N & ~(1<<pos);}
bool Chkbit(int N,int pos){return (bool)(N & (1<<pos));}
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
bool isConst(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
long long int toLlint(string s) { long long int sm; stringstream ss(s); ss>>sm; return sm;}

///**********************************************************//


///         0123456789
#define MX  1502
#define MOD 1000000007
#define INF (1<<28)
#define eps 1e-9

/// ==========================================////

char a[MX],b[MX];

int dp[MX][MX];
int n,s;

void Solve()
{
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            dp[i+1][j+1]=dp[i][j]+(a[i]!=b[j]);
        }
    }
}

bool IsOk(int len)
{
    for(int i=len;i<=n;i++) {
        for(int j=len;j<=n;j++) {
            if(dp[i][j]-dp[i-len][j-len]<=s) return true;
        }
    }
    return false;
}

int BSearch()
{
    n=strlen(a);
    int l=0,h=n,ans;
    Solve();
//    for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++)cout<<dp[i][j]<<" ";
//         cout<<endl;
//    }
    while(l<=h) {
        int mid=(l+h)/2;
        if(IsOk(mid)) {
            l=mid+1;
            ans=mid;
        }
        else h=mid-1;
    }
    return ans;
}

int main()
{
    int t;
    S1(t);

    for(int cs=1;cs<=t;cs++) {
        S1(s);
        scanf("%s%s",&a,&b);
        printf("%d\n",BSearch());
        MEM(dp,0);
    }

    return 0;
}

///============= Thank You ===================///

