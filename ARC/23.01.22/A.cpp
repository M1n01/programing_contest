#include "bits/stdc++.h"

using namespace std;

const long long	x = 998244353;

long long	string_mod(string s, long long mod)
{
	long long	rest = 0;
	for (char c : s)
	{
		int	v = c - '0';
		rest = (rest * 10 + v) % mod;
	}
	return rest;
}

int	main()
{
	int	n;
	string	a, b;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > b[i])
		{
			int	tmp;
			tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;
		}
	}
	cout << string_mod(a, x) * string_mod(b, x) % x << endl;
	return (0);
}

// (a % x) * (b % x) % x