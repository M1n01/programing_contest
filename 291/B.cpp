#include "bits/stdc++.h"

using namespace std;

int	main()
{
	int	n;
	cin >> n;
	vector<double>	x(5*n);
	for (int i = 0; i < 5 * n; i++)
		cin >> x[i];
	sort(x.begin(), x.end());
	double	sum = 0;
	for (int i = n; i < 4*n; i++)
		sum += x[i];
	double	avg;
	avg = sum / (3*n);
	cout << fixed << setprecision(15) << avg << endl;
	return (0);
}
