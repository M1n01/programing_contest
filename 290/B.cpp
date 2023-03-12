#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n, k;
	cin >> n >> k;
	string	s;
	cin >> s;
	int	count = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'o' && count >= k)
			s[i] = 'x';
		if (s[i] == 'o')
			count++;
	}
	cout << s << endl;
	return (0);
}
