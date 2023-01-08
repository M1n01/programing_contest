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
	string	s;
	cin >> s;
	int	count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (s[i] == '1')
			count++;
	}
	cout << count << endl;
	return (0);
}
