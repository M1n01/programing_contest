#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n;
	string	s;
	cin >> n >> s;
	for (int i = 0; i < n - 1; i++)
	{
		if ((s[i] == 'M' && s[i+1] == 'M') || (s[i] == 'F' && s[i+1] == 'F'))
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
	return (0);
}