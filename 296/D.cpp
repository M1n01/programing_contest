#include "bits/stdc++.h"

using namespace std;

int	main()
{
	long	n, m;
	cin >> n >> m;
	for (long a = 1; a <= n; a++)
	{
		// bはmをaで割った時の四捨五入
		long	b = (m + a - 1) / a;
		if (a * b >= m && b <= n)
		{
			cout << a * b << endl;
			return (0);
		}
	}
	cout << "-1" << endl;
	return (0);
}