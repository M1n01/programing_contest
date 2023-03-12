#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int n;
	string s;
	cin >> n >> s;
	set<pair<int, int>> seen; // 訪れた場所を保持するset
	int x = 0, y = 0; // 現在位置
	seen.insert(make_pair(x, y));
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == 'R')++x;
		if (s[i] == 'L') --x;
		if (s[i] == 'U') ++y;
		if (s[i] == 'D') --y;
		if (seen.count(make_pair(x, y)))
		{
			// 訪れたことがある場所であれば
			cout << "Yes" << endl;
			return 0;
		}
		seen.insert(make_pair(x, y));
	}
	cout << "No" << endl;
	return 0;
}

// int	main()
// {
// 	int	n;
// 	string	s;
// 	cin >> n >> s;
// 	vector<vector<bool>>	map(2*n, vector<bool>(2*n, false));
// 	map[n][n] = true;
// 	pair<int, int>	pos(0, 0);
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (s[i] == 'R')
// 			pos.first += 1;
// 		else if (s[i] == 'L')
// 			pos.first -= 1;
// 		else if (s[i] == 'U')
// 			pos.second += 1;
// 		else if (s[i] == 'D')
// 			pos.second -= 1;
// 		if (!map[n+pos.first][n+pos.second])
// 				map[n+pos.first][n+pos.second] = true;
// 		else
// 		{
// 			cout << "Yes" << endl;
// 			return (0);
// 		}
// 	}
// 	cout << "No" << endl;
// 	return (0);
// }
