#include "bits/stdc++.h"

using namespace std;

int	h, w;
int	MAP[10][10];
int	dp[10][10];

int	solve(int r, int c)
{
	if (r == h - 1 && c == w - 1)
		return 1;
	if (dp[r][c] != -1)
		return dp[r][c];
	int	res = 0;
	if (r < h - 2 && MAP[r+1][c] != MAP[r][c])
		res += solve(r+1, c);
	if (c < w - 2 && MAP[r][c+1] != MAP[r][c])
		res += solve(r, c+1);
	dp[r][c] = res;
	return res;
}

int	main()
{
	cin >> h >> w;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			cin >> MAP[i][j];
	}
	memset(dp, -1, sizeof(dp));
	cout << solve(0, 0) << endl;
	return (0);
}
