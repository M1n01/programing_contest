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
	string	s;
	cin >> s;
	long long	count = 0;
	int	len = s.length();
	bool	d = false;
	for (int i = 0; i < len; i++)
	{
		if (len == 0 && s[0] == '0')
		{
			cout << count << endl;
			return (0);
		}
		if (s[i] == '0' && s[i + 1] == '0' && d == false)
		{
			d = true;
			continue ;
		}
		else if (s[i] == '0' && d == true)
		{
			d = false;
		}
		count++;
	}
	cout << count << endl;
	return (0);
}