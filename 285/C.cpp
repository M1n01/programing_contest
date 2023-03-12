#include "bits/stdc++.h"

using namespace std;

int	main()
{
	string	s;
	cin >> s;
	int	len = s.length();
	long long	ans = 0;
	for (int i = 0; i < len; i++)
	{
		long long	x = 1;
		for (int j = len - i; j > 1; j--)
			x *= 26;
		ans += ((s[i] - 'A') % 26 + 1) * x;
	}
	cout << ans << endl;
	return (0);
}

// BAAAAAAA len=8,0~7

// int	main()
// {
// 	string	s;
// 	cin >> s;
// 	int	len = s.size();
// 	long long	ans = 0, add = 26;
// 	for (int i = 1; i <= len - 1; i++)
// 	{
// 		ans += add;
// 		add *= 26;
// 	}
// 	long long	num = 0;
// 	for (int i = 0; i < len; i++)
// 	{
// 		num *= 26;
// 		num += s[i] - 'A';
// 	}
// 	cout << ans + num + 1 << endl;
// 	return (0);
// }
