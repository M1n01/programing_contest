#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n;
	cin >> n;
	int	a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<bool>	called(n, false);
	int	count = 0;
	for (int i = 0; i < n; i++)
	{
		if (called[i] == false)
		{
			called[a[i] - 1] = true;
			// cout << a[i] - 1 << endl;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (called[i] == false)
			count++;
	}
	cout << count << endl;
	for (int i = 0; i < n; i++)
	{
		if (called[i] == false)
			cout << i+1 << ' ';
	}
	cout << endl;
	return (0);
}

// key: 0 1 2 3 4

// a  : 3 1 4 5 4