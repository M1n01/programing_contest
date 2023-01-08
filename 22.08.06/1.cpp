#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

int	main()
{
	int	a[5];

	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	sort(a, a+5);
	for (int i = 0; i < 13; i++)
	{
		if (((a[0] == a[1] && a[2] == a[3] && a[3] == a[4]) || (a[0] == a[1] && a[1] == a[2] && a[3] == a[4])) && (a[1] != a[2] || a[2] != a[3]))
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}