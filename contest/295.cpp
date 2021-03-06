#include<bits/stdc++.h>

#define xx first
#define yy second
#define all(a) a.begin(), a.end()
#define vsort(v) sort(all(v))
#define UNIQUE(a)  sort(all(a)); a.erase(unique(all(a)), a.end())
#define clr(a,k) memset(a,k,sizeof a)
#define bclr(b) memset(b,false,sizeof b)
#define fr(i, a) for(i = 0; i < a; i++)
#define frr(i,a) for(i = a - 1; i >= 0, i--)
#define LL long long
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define vi vector<int>
#define vll vector<long long>
///***** bit *****///
#define check_bit(a, b) (a&(1<<b))
#define set_bit(a, b) (a|(1<<b))
#define total_bit(a) __builtin_popcount(a)
///***** Input / Output *****///
#define s1(a) scanf("%d", &a)
#define s2(a, b) scanf("%d %d", &a, &b)
#define s3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define p1(a) printf("%d", a)
#define p2(a, b) printf("%d %d", a, b)
#define p3(a, b, c) printf("%d %d %d", a, b, c)


#define MOD 1000000007
#define MAX 200009


using namespace std;

int cost[MAX];

int BFS(int st, int ed)
{
    queue<pii>Q;
    bool vis[MAX];
    clr(vis, false);
    Q.push(mp(st, 0));
    while(!Q.empty())
    {
        pii top = Q.front();
        Q.pop();
        int cn = top.xx;
        int cc = top.yy;
        if(vis[top.xx]) continue;
        vis[cn] = 1;
        cost[cn] = cc;

        if(cn == ed)
            return cc;

        if(cn * 2 <= 100000)
            Q.push(mp(cn*2, cc +  1));
        if(cn - 1>= 0)
            Q.push(mp(cn - 1, cc + 1));
    }

}


int main()
{
    int tc,t,n, cs=1,i,j,k;
    string str;
    int m;
    cin>>n>>m;

    int res = BFS(n, m);
    cout<<res<<endl;













    return 0;
}
