#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

/*回答例
int	main()
{
	const int	mod = 998244353;
	long long	x, y, ans;
	long long a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;
	x = ((a % mod) * (b % mod)) % mod;
	x = ((c % mod) * x) % mod;
	y = ((d % mod) * (e % mod)) % mod;
	y = ((f % mod) * y) % mod;
	ans = (x - y + mod) % mod;
	cout << ans << endl;
	return (0);
}
*/

int	main()
{
	unsigned long long a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	unsigned long long	n = 998244353;
	unsigned long long	mod = 0;
	unsigned long long	A = 0;
	unsigned long long	B = 0;
	A = (a % n) * (b % n) * (c % n);
	B = (d % n) * (e % n) * (f % n);
	if (a % n != 0 && b % n != 0 && c % n != 0 && d % n != 0 && e % n != 0 && f % n != 0)
	{
		mod = (A - B) % n;
	}
	else
	{
		mod = ((A - B) % n + n);
	}
	cout << mod << endl;
	return (0);
}
