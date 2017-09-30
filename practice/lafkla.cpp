#include<bits/stdc++.h>
using namespace std;
const int mx = 100005;
const int mod = 1000000007;

int tree[mx], a[mx], dis[mx], n;

///从右下往左上“看”
bool cmp(int x, int y)
{
    if (a[x] != a[y]) return a[x] < a[y];
    return x > y;
}

void add(int pos, int x)
{
    for (; pos <= n; pos += pos & -pos) tree[pos] = (tree[pos] + x) % mod;
}

int sum(int pos)
{
    int res = 0;
    for (; pos; pos -= pos & -pos) res = (res + tree[pos]) % mod;
    return res;
}

int main()
{
    int t, cas, i;
    scanf("%d", &t);
    for (cas = 1; cas <= t; ++cas)
    {
        scanf("%d", &n);
        for (i = 1; i <= n; ++i) scanf("%d", &a[i]), dis[i] = i;
        sort(dis + 1, dis + n + 1, cmp);
        //for(int i=1;i<=n;i++)cout<<dis[i]<<" ";
        //cout<<endl;
        memset(tree, 0, sizeof(tree));
        for (i = 1; i <= n; i++)
        {
            cout<<sum(dis[i])<<endl;
            add(dis[i], sum(dis[i]) + 1);
        }
        printf("Case %d: %d\n", cas, sum(n));
    }
    return 0;
}
