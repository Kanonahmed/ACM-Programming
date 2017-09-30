/*-----------------------------------------------------------------------------
           "Act like an (2.718)n(9.8)sqrt(-1)n(2.718)(2.718)(8.314)"
-----------------------------------------------------------------------------*/
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
/*---------------------------------------------------------------------------*/
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
#define nl() printf("\n")
#define sp() printf(" ")
#define out(a) cout << #a << ":" << a
#define bug() puts("**********")
#define bug1(a) out(a); nl()
#define bug2(a, b) out(a); sp(); out(b); nl()
#define bug3(a, b, c) out(a); sp(); out(b); sp(); out(c); nl()
#define bug4(a, b, c, d) out(a); sp(); out(b); sp(); out(c); sp(); out(d); nl()
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
/*---------------------------------------------------------------------------*/
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
/*---------------------------------------------------------------------------*/
int dx4[] = { -1, 0, 1, 0};
int dy4[] = {0, 1, 0, -1};
const double pi = acos(-1.0), eps = 1e-9;
const int N = 5e2 + 5, M = 1e9 + 7;
/*---------------------------------------------------------------------------*/

int main(){
    return 0;
}
