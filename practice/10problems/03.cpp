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
	int	count = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	while (true)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
				a[i] /= 2;
			else
			{
				cout << count << endl;
				return (0);
			}
		}
		count++;
	}
}
