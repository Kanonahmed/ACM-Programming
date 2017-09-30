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
const int N = 1e5 + 5, M = 1e9 + 7;
const double pi = acos(-1.0), eps = 1e-9;
int bb[N], gg[N];

int main() {
    int n, m, b, g;
    cin >> n >> m;
    cin >> b;
    for(int i = 0; i < b; i++) {
        int x;
        cin >> x;
        bb[x]++;
    }
    cin >> g;
    for(int i = 0; i < g; i++) {
        int x;
        cin >> x;
        gg[x]++;
    }
    int lcm = (n * m) / __gcd(n, m);
    for(int i = 0; i < 2 * lcm; i++) {
        int x = i % n, y = i % m;
        bb[x] |= gg[y];
        gg[y] |= bb[x];
    }
    for(int i = 0; i < n; i++) {
        if(!bb[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i = 0; i < m; i++) {
        if(!gg[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
