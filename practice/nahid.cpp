/*  -------------------------------------------------------  */
/*  Act like an (2.718)n(9.8)sqrt(-1)n(2.718)(2.718)(8.314)  */
/*  -------------------------------------------------------  */
/*  User Name : underSpirit / underspirit                    */
/*  Full Name : Md. Nahidul Islam                            */
/*  Email     : nahidshrabon@gmail.com, nahidcseju@gmail.com */
/*  School    : Jahangirnagar University                     */
/*  Country   : Bangladesh.                                  */
/*  -------------------------------------------------------  */
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<complex>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<climits>
#include<functional>
#include<iostream>
#include<istream>
#include<iterator>
#include<iomanip>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rev(i, a, b) for(int i = a - 1; i >= b; i--)
#define mem(a, v) memset(a, v, sizeof a)
#define pii pair<int, int>
#define X first
#define Y second
#define vi vector<int>
#define pb push_back
#define all(v) v.begin(), v.end()
#define gc getchar
#define nl() puts("")
#define sp() printf(" ")
#define out(a) cout << #a << ":" << a
#define bug() puts("**********")
#define bug1(a) out(a); nl()
#define bug2(a, b) out(a); sp(); out(b); nl()
#define bug3(a, b, c) out(a); sp(); out(b); sp(); out(c); nl()
#define bug4(a, b, c, d) out(a); sp(); out(b); sp(); out(c); sp(); out(d); nl()
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
template <typename T> string toStr(T Number) {
    stringstream ss;
    ss << Number;
    return ss.str();
}
template <typename T> T toNum(const string &Text) {
    stringstream ss(Text);
    T result;
    return ss >> result ? result : 0;
}
int inGrid(int x, int y, int r, int c) {
    return(x >= 0 && x < r && y >= 0 && y < c ? 1 : 0);
}
int dx4[] = { -1, 0, 1, 0};
int dy4[] = {0, 1, 0, -1};
const double pi = acos(-1.0), eps = 1e-9;
const int N = 2e4 + 5, M = 1e9 + 7;
struct node {
    int id, w, pro;
    node() {};
    node(int _id, int _w, int _pro) {
        id = _id, w = _w, pro = _pro;
    }
};
struct data {
    int id, w, cnt;
    data() {};
    data(int _id, int _w, int _cnt) {
        id = _id, w = _w, cnt = _cnt;
    }
    bool friend operator < (data a, data b) {
        return a.w > b.w;
    }
};
int n, m, k, d;
vector<node>g[N];
int dis[N][15];

int dijkstra() {
    mem(dis, 63);
    priority_queue<data>q;
    q.push(data(0, 0, 0));
    data u, v;
    while(!q.empty()) {
        u = q.top();
        q.pop();
        if(u.id == n - 1) return u.w;
        rep(i, 0, g[u.id].size()) {
            node p = g[u.id][i];
            v.id = p.id;
            v.w = p.w + u.w;
            v.cnt = u.cnt + (p.pro ? 1 : 0);
            if(v.cnt <= d && dis[v.id][v.cnt] > v.w) {
                dis[v.id][v.cnt] = v.w;
                q.push(v);
            }
        }
    }
    return -1;
}

int main() {
    int tc;
    scanf("%d", &tc);
    rep(cs, 1, tc + 1) {
        rep(i, 0, N) g[i].clear();
        scanf("%d%d%d%d", &n, &m, &k, &d);
        rep(i, 0, m) {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            g[u].pb(node(v, w, 0));
        }
        rep(i, 0, k) {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            g[u].pb(node(v, w, 1));
        }
        printf("Case %d: ", cs);
        int res = dijkstra();
        if(res == -1) puts("Impossible");
        else printf("%d\n", res);
    }
    return 0;
}
