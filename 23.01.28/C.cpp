#include "bits/stdc++.h"

using namespace std;

vector<vector<int>>	graph;
vector<bool>	vis;

bool	dfs(const int c, const int before)
{
	vis[c] = true;
	for (unsigned long i = 0; i < graph[c].size(); i++)
	{
		if (graph[c][i] == before)
			continue ;
		if (vis[graph[c][i]])
			return true;
		dfs(graph[c][i], c);
	}
	return false;
}

int	main()
{
	int	n, m;
	cin >> n >> m;
	if (m == 0)
	{
		cout << "No" << endl;
		return (0);
	}
	graph.resize(n);
	for (int i = 0; i < m; i++)
	{
		int	u, v;
		cin >> u >> v;
		u--, v--;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	// 処理
	vis.resize(n);
	bool	has_loop = dfs(0, -1);
	if (has_loop)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return (0);
}