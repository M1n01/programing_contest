#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <map>

using namespace std;

int	n,m;
vector<vector<int>>	g;
vector<bool>	vis;

void	dfs(int c)
{
	vis[c] = true;
	for (auto& d : g[c])
	{
		cout << d << " ";
		if (vis[d] == true)
			continue ;
		dfs(d);
	}
}

int	main()
{
	cin >> n >> m;
	g.resize(n);
	for (int i = 0; i < m; i++)
	{
		int	u, v;
		cin >> u >> v;
		--u, --v;
		g[u].push_back(v);
		g[v].push_back(u);
		cout << "\ng[" << u+1 << "]: ";
		for (int i = 0; i < g[u].size(); i++)
			cout << " " << g[u][i] + 1;
		cout << "\ng[" << v+1 << "]: ";
		for (int i = 0; i < g[v].size(); i++)
			cout << " " << g[v][i] + 1;
	}
	int	ans = 0;
	vis.resize(n);
	for (int i = 0; i < n; i++)
	{
		if (vis[i] == false)
			ans++, dfs(i);
	}
	cout << ans << endl;
	return (0);
}

// int	main()
// {
// 	int	n, m;
// 	cin >> n >> m;
// 	if (m == 0)
// 	{
// 		cout << n << endl;
// 		return (0);
// 	}
// 	vector<int>	a(n, -1);
// 	int	count = 1;
// 	for (int i = 0; i < m; i++)
// 	{
// 		int	u, v;
// 		cin >> u >> v;
// 		if (a[u - 1] == -1 && a[v - 1] == -1)
// 		{
// 			a[u - 1] = count;
// 			a[v - 1] = count;
// 			count++;
// 		}
// 		else if (a[u - 1] == -1 && a[v - 1] > 0)
// 			a[u - 1] = a[v - 1];
// 		else if (a[v - 1] == -1 && a[u - 1] > 0)
// 			a[v - 1] = a[u - 1];
// 		else if (a[v - 1] == a[u - 1])
// 			continue ;
// 		else
// 			// cout << "else: " << u << v << endl;
// 		{
// 			for (int i = 0; i < n; i++)
// 			{
// 				if (a[i] >= max(a[v - 1], a[u - 1]))
// 					a[i]--;
// 			}
// 		}
// 	}
// 	cout << *max_element(a.begin(), a.end()) << endl;
// 	// for (int i = 0; i < n; i++)
// 	// 	cout << a[i] << " ";
// 	return (0);
// }