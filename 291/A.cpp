#include "bits/stdc++.h"

using namespace std;

int	main()
{
	string	s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			cout << i + 1 << endl;;
	}
	return (0);
}