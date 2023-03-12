#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n, k;
	cin >> n >> k;
	vector<int>	a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	int	ans = 0;
	if (a[0] != 0)
	{
		cout << ans << endl;
		return (0);
	}
	for (int i = 0; i < k - 1; i++)
	{
		if (a[i+1] == a[i] + 1)
			ans++;
	}
	cout << ans+1 << endl;
	// for (int i = 0; i < a.size(); i++)
	// 	cout << a[i] << endl;
	return (0);
}
