#include "bits/stdc++.h"

using namespace std;

int	n;

bool	check_kaibun(string s)
{
	for (int i = 0; i < (n / 2 + n % 2); i++)
	{
		if (s[i] == s[n - i - 1])
			continue ;
		else
			return (false);
	}
	return (true);
}

int	main()
{
	int	a, b;
	string	s;
	cin >> n >> a >> b >> s;
	string	ans;
	long long	sum = 0;
	for (int i = 0; i < n; i++)
	{
		
		if (check_kaibun(ans))
		{
			cout << sum << endl;
			cout << s << endl;
			return (0);
		}
	}
	return (0);
}