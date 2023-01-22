#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n, p, q, r, s;
	cin >> n >> p >> q >> r >> s;
	vector<int>	a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int	tmp;
	int	len = q - p;
	p--, q--, r--, s--;
	for (int i = 0; i <= len; i++)
	{
		tmp = a[p + i];
		a[p + i] = a[r + i];
		a[r + i] = tmp;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return (0);
}