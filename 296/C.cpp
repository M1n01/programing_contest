#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int n, x;
	cin >> n >> x;
	vector<int>	a(n);
	unordered_set<int>	numbers;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		numbers.insert(a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (numbers.count(a[i] - x))
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}
