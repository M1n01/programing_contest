#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

int	main()
{
	int	n, m;

	cin >> n >> m;
	int	op[n], a[m];
	for (int i = 0; i < m; i++)
		a[i] = i + 1;
	for (int i = 0; i < n; i++)
		op[i] = a[i];
	while 
	{
		for (int i = 0; i < n; i++)
		{
			cout << op[i];
			if (i != n - 1)
				cout << ' ';
		}
		cout << endl;
	}
}