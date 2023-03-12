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
	int	a, b;
	cin >> a >> b;
	long	sum = 1;
	for (int i = 0; i < b; i++)
	{
		sum *= a;
	}
	cout << sum << endl;
	return (0);
}