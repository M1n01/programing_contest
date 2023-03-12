#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n;
	cin >> n;
	string	s;
	cin >> s;
	for (int i = 1; i <= n - 1; i++)
	{
		int	l = 0;
		for (int k = 1; k <= n - i; k++)
		{
			if (s[k - 1] != s[i + k - 1])
				l++;
			else
				break ;
		}
		cout << l << endl;
	}
	return (0);
}