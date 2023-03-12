#include "bits/stdc++.h"

using namespace std;

#define INF 100000

int	main()
{
	int	n, x;
	cin >> n >> x;
	vector<int>	a(n), b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i];
	bool	dp[n+1][x+1];
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= x; j++)
			dp[i][j] = false;
	}
	dp[0][0] = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= x; j++)
		{
			for (int k = 0; k <= b[i]; k++)
			{
				if (j >= a[i] * k)
				{
					if (dp[i][j - a[i] * k])
						dp[i+1][j] = true;
				}
			}
		}
	}
	if (dp[n][x])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
