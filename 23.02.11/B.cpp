#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n, m;
	cin >> n >> m;
	int	a[m];
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	int	ans[n];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == a[j])
				ans[i] == i;
		}
	}
	cout << ans << endl;
	return (0);
}
