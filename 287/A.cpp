#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int n;
	cin >> n;
	int	count = 0;
	for (int i = 0; i < n; i++)
	{
		string	s;
		cin >> s;
		if (s == "For")
			count++;
	}
	if (count > n / 2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}