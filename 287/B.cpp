#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n,m;
	cin >> n >> m;
	vector<string>	s(n);
	vector<string>	t(m);
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < m; i++)
		cin >> t[i];
	// 重複削除
	unordered_set<string> s_sets(t.begin(), t.end());
	int	count = 0;
	for (int i = 0; i < n; i++)
	{
		for (const auto& s_set : s_sets)
		{
			if (s[i].substr(3) == s_set)
				count++;
		}
	}
	cout << count << endl;
	return (0);
}
