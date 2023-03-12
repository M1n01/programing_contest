#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n, k;
	cin >> n >> k;
	vector<string> rank;
	for (int i = 0; i < k; i++)
	{
		string	s;
		cin >> s;
		rank.push_back(s);
	}
	sort(rank.begin(), rank.end());
	for (int i = 0; i < k; i++)
		cout << rank[i] << endl;
	return (0);
}
