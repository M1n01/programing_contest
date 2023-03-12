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
		long long	n;
		cin >> n;
		long long	p = 0, q = 0;
		for (long long i = 2; i <= n / i / i; i++)
		{
			if (n % i != 0)
				continue ;
			if ((n / i) % i == 0)
			{
				p = i;
				q = n / i / i;
			}
			else
			{
				q = i;
				p = (long long) sqrt(n / i);
			}
			break ;
		}
		cout << p << ' ' << q << endl;
	}
	return (0);
}