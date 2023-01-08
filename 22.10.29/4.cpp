// メモ化再帰
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
#include <string>
#include <vector>
using namespace std;

vector<int> memo(11, -1);

int	func(unsigned long long n)
{
	if (n == 0)
		return (1);
	// if (memo[])
	return (func(n / 2) + func(n / 3));
}

int	main()
{
	unsigned long long	n;
	cin >> n;
	int	a = func(n);
	cout << a << endl;
	return (0);
}
