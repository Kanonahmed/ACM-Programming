/* ------------------------------------------------------- */
/* Act like an (2.718)n(9.8)sqrt(-1)n(2.718)(2.718)(8.314) */
/* ------------------------------------------------------- */
/*                    underSpirit                          */
/*                 Md. Nahidul Islam                       */
/*      nahidshrabon@gmail.com, nahidcseju@gmail.com       */
/*         Jahangirnagar University, Bangladesh.           */
/* ------------------------------------------------------- */
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
#define pii pair<int, int>
#define ppi pair<pair<int, int>, int>
#define X first
#define Y second
#define mp make_pair
#define pb push_back
#define gc getchar
#define all(v) v.begin(), v.end()
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rev(i, a, b) for(int i = a - 1; i >= b; i--)
#define bug(a) cout << #a << ": " << a << endl
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
int ingrid(int x, int y, int r, int c) {
    if(x >= 0 && x < r && y >= 0 && y < c) return 1;
    return 0;
}
int dx4[] = { -1, 0, 1, 0};
int dy4[] = {0, 1, 0, -1};
const double pi = acos(-1.0), eps = 1e-9;
const int N = 2e2 + 5, M = 1e9 + 7;
int n, m;
char g[N][N];
vector<pii>tel;
int dp[N][N][3];

int bfs(pii st, pii ed) {
    queue<ppi>q;
    q.push(mp(st, 0));
    dp[st.X][st.Y][0] = 0;
    int c = 0;
    while(!q.empty()) {
        ppi u = q.front();
        q.pop();
        int x = u.X.X, y = u.X.Y, z = u.Y;
        if(u.X == ed) return dp[x][y][z];
        if(g[x][y] != '*' || z) { // z true if already teleported
            rep(i, 0, 4) {
                int dx = x + dx4[i], dy = y + dy4[i], dz = 0;
                if(ingrid(dx, dy, n, m) && g[dx][dy] != '#' && dp[dx][dy][dz] == -1) {
                    dp[dx][dy][dz] = dp[x][y][z] + 1;
                    q.push(mp(mp(dx, dy), dz));
                }
            }
        }
        if(g[x][y] == '*' && c < tel.size()) { // c < tel.size : All stars not processed yet
            rep(i, 0, tel.size()) {
                if(tel[i] != u.X) { // != current star
                    int dx = tel[i].X, dy = tel[i].Y, dz = 1;
                    if(dp[dx][dy][dz] == -1) {
                        dp[dx][dy][dz] = dp[x][y][z] + 1;
                        q.push(mp(mp(dx, dy), dz));
                        c++;
                    }
                }
            }
        }
    }
    return -1;
}

int main() {
    int tc;
    scanf("%d", &tc);
    rep(cs, 1, tc + 1) {
        scanf("%d%d", &n, &m);
        pii st, ed;
        tel.clear();
        rep(i, 0, n) {
            scanf("%s", g[i]);
            rep(j, 0, m) {
                if(g[i][j] == 'P') st = mp(i, j);
                else if(g[i][j] == 'D') ed = mp(i, j);
                else if(g[i][j] == '*') tel.pb(mp(i, j));
            }
        }
        memset(dp, -1, sizeof dp); // vis & cost works together
        int ans = bfs(st, ed);
        printf("Case %d: ", cs);
        if(ans == -1) puts("impossible");
        else printf("%d\n", ans);
    }
    return 0;
}
