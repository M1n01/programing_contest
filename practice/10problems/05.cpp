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

int main()
{
	int	n, a, b;
	cin >> n >> a >> b;
	long	sum = 0;
	for (int i = n; i >= 0; i--)
	{
		int	x = i % 10 + (i / 10) % 10 + (i / 100) % 100 + (i / 1000) % 1000 + (i / 10000) % 10000;
		if (a <= x && x <= b)
			sum += i;
	}
	cout << sum << endl;
	return (0);
}
