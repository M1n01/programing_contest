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
	int	len = s.size();
	vector<bool>	box(26, true);
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '\(')
			continue ;
		/* ここわからん...
		if (s[i] == '\)')
		{
			for (int j = 0; j < i; j++)
			{
				s[j];
			}
		}
		*/
		if ('a' <= s[i] && s[i] <= 'z')
		{
			if (box[s[i] - 'a'] == false)
			{
				cout << "No" << endl;
				return (0);
			}
			else
				box[s[i] - 'a'] == false;
		}
	}
	cout << "Yes" << endl;
	return (0);
}