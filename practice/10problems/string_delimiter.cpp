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
	string	s;
	cin >> s;
	bool	first = false;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '"' && first == false)
			first = true;
		else if (s[i] == '"' && first == true)
			first = false;
		else if (s[i] == ',' && first == false)
			s[i] = '.';
	}
	cout << s << endl;
	return 0;
}
