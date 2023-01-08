#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <map>

using namespace std;

int	main()
{
	int	t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int	n;
		cin >> n;
		vector<int>	a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int	count = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 1)
				count++;
		}
		cout << count << endl;
	}
	return (0);
}