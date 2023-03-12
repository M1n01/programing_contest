#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n, m;
	cin >> n >> m;
	vector<int>	s[m];
	for (int i = 0; i < m; i++)
	{
		int	c;
		cin >> c;
		for (int j = 0; j < c; j++)
		{
			int	a;
			cin >> a;
			s[i].push_back(a);
		}
	}
	int	count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ()
				count++;
		}
	}
	cout << count << endl;
	return (0);
}