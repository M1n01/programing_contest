#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n;
	cin >> n;
	vector<string>	s(n), t(n);
	for (int i = 0; i < n; i++)
		cin >> s[i] >> t[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue ;
			if (t[i] == s[j])
			{
				cout << "No" << endl;
				return (0);
			}
		}
	}
	cout << "Yes" << endl;
	return (0);
}