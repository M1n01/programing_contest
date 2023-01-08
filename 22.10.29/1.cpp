#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int	main()
{
	int	n;
	cin >> n;
	long long	h[n];
	for (int i = 0; i < n; i++)
		cin >> h[i];
	size_t index = 0;
	long long	H = 0;
	for (int i = 0; i < n; i++)
	{
		if (H < h[i])
		{
			H = h[i];
			index = i + 1;
		}
	}
	cout << index << endl;
}
