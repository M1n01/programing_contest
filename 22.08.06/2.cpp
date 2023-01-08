#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

int	main()
{
	int	n;

	cin >> n;
	int	count = 0;
	int	p[n - 1];
	for (int i = 2; i <= n; i++)
		cin >> p[i];
	for (int i = n; i > ; i++)
	{
		count += i - p[i - 1] - 2;
	}
	cout << count << endl;
}