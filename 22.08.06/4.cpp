#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;

int	main()
{
	int			n, l, r;
	long long	sum[3];
	long long	sum_c;

	cin >> n >> l >> r;
	int	a[n];
	sum[0] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum[0] += a[i];
	}
	sum[1] = sum[0];
	sum_c = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++);
		{
			a[j] = ;
			sum_c += ;
		}
		if (sum[1] < sum_c)
			sum[1] = sum_c;
	}
	sum[2] = sum[0];
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = i - 1; j > 0; j--);
		{
			;
		}
		if (sum[2] < sum_c)
			sum[i] = sum_c;
	}
	cout << sum << endl;
}