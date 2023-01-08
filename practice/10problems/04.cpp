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
	int	a, b, c, x;
	cin >> a >> b >> c >> x;
	int	count = 0;
	for (int i = a; i >= 0; i--)
	{
		for (int j = b; j >= 0; j--)
		{
			for (int k = c; k >= 0; k--)
			{
				if (x == 500 * i + 100 * j + 50 * k)
					count++;
			}
		}
	}
	cout << count << endl;
	return (0);
}
