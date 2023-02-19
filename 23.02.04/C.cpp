#include "bits/stdc++.h"

using namespace std;

vector<vector<int>>	graph;
vector<bool>	vis, finished;
int	pos;
int	cnt;

void	dfs(int v, int p)
{
	vis[v] = true;
	for (auto nv : graph[v])
	{
		if (nv == p)
			continue ;
		if (nv == finished[v])
			continue ;
		if (vis[nv] && !finished[nv])
		{
			pos = nv;
			cnt++;
		}
		dfs(nv, v);
		if (pos != -1)
			return ;
	}
	finished[v] = true;
}

int	main()
{
	int	n,m;
	cin >> n >> m;
	graph.resize(n);
	for (int i = 0; i < m; i++)
	{
		int	a, b;
		cin >> a >> b;
		a--, b--;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	vis.resize(n);
	finished.resize(n);
	pos = -1;
	dfs(0, -1);
	cout << cnt << endl;
	return (0);
}