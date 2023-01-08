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
	int	n;
	cin >> n;
	vector<long>	a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		// cout << a[i] << endl;
	}
	int	q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int	x, y, z;
		cin >> x;
		if (x == 2)
		{
			cin >> y;
			cout << a[y - 1] << endl;
			continue ;
		}
		else
		{
			cin >> y >> z;
			a[y - 1] = z;
		}
	}
	return (0);
}