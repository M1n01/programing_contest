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
	int	a, b;
	cin >> a >> b;
	if (a * b % 2 == 0)
		cout << "Even" << endl;
	else
		cout << "Odd" << endl;
	return 0;
}
