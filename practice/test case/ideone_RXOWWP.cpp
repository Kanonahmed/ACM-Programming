#include <iostream>
#include <cstdio>
#include <vector>

#define MAXN 1024

using namespace std;

int N, M, start;
vector<int> G[MAXN];

void read()
{
	cin >> N >> M;

	for(int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;

		G[u].push_back(v);
		G[v].push_back(u);
	}

	cin >> start;
}

int used[MAXN];
bool visited[MAXN];

void DFS(int u, int level, int parent)
{
	used[u] = level;
	visited[u] = true;

	int sz = G[u].size();
	for(int i = 0; i < sz; i++)
	{
		int v = G[u][i];

		if(!visited[v])
			DFS(v, level + 1, u);

		if(v != parent && used[v] != 0)
			cout << "Length of Cycle from " << v << " to " << u << " is " << level - used[v] + 1 << endl;
	}

	used[u] = 0;
}

void solve()
{
	DFS(start, 1, -1);	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	read();
	solve();
	return 0;
}
