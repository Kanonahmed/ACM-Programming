#include<bits/stdc++.h>
using namespace std;
#define xx              first
#define yy              second
#define pb              push_back;
#define mp              make_pair
#define LL              long long
#define PI              acos(-1.0)
#define AND(a,b)        ((a) & (b))
#define OR(a,b)         ((a)|(b))
#define XOR(a,b)        ((a) ^ (b))
#define f1(i,n)         for(int i=1;i<=n;i++)
#define f0(i,n)         for(int i=0;i<n;i++)
#define meminf(B)       memset(B,126,sizeof B)
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define UB(a,x) (upper_bound(all(a),x)-a.begin())
#define LB(a,x) (lower_bound(all(a),x)-a.begin())
#define countbit(x) __builtin_popcountll((ll)x)

template <class T> inline T bigmod(T p, T e, T M) {
    LL ret = 1;
    for (; e > 0; e >>= 1) {
        if (e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T> inline T gcd(T a, T b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}
template <class T> inline T modinverse(T a, T M) {
    return bigmod(a, M - 2, M);
}

/*    ----------------------------------------
     |         Scratch where itches           |
      ----------------------------------------   */

int Set(int N, int pos) {
    return N = N | (1 << pos);
}
int Reset(int N, int pos) {
    return N = N & ~(1 << pos);
}
bool Chkbit(int N, int pos) {
    return (bool)(N & (1 << pos));
}
int month[] = { -1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //Not Leap Year
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction
const double eps = 1e-6;
LL dp[105];
LL value[105];
vector<int>graph[5000];

LL go(int u) {
    if (dp[u] != -1)return dp[u];
    LL MX = 0;
    for (int i = 0; i < graph[u].size(); i++) {
        int v = graph[u][i];
        MX = max(MX, value[v] + go(v));
    }
    return dp[u] = MX;
}

void print(int u) {
//    if (!graph[u].size()) {
//        cout << u << endl;
//        return;
//    }
    LL &ret = dp[u];
    for (int i = 0; i < graph[u].size(); i++) {
        int v = graph[u][i];
        if (ret == value[v] + go(v)) {
            print(v);
            return;
        }
    }
    cout << u << endl;
}

int main() {
    int tc, tt = 1;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        memset(value, 0, sizeof value);
        memset(dp, -1, sizeof dp);
        for (int i = 0; i < 5000; i++)graph[i].clear();
        for (int i = 0; i < n; i++)cin >> value[i];
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            graph[x].push_back(y);
        }
        cout << "Case " << tt++ << ": " << go(0) << " ";
        print(0);
    }
    return 0;
}

