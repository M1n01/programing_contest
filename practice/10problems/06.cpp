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
	int	n;
	cin >> n;
	vector<int>	a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	long	sum_a = 0;
	long	sum_b = 0;
	sort(a.begin(), a.end(), greater<int>());
	for (int i = n; i >= 0; i--)
	{
		if (i % 2 == 0)
			sum_a += a[i];
		else
			sum_b += a[i];
	}
	cout << abs(sum_b - sum_a) << endl;
	return (0);
}
