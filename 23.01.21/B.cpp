#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n;
	string	s;
	cin >> n >> s;
	string	ans;
	for (int i = 0; i < n; i++)
	{
		ans.push_back(s[i]);
		if (s[i] == 'n' && s[i + 1] == 'a')
			ans.push_back('y');
	}
	cout << ans << endl;
	return (0);
}