#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

/* 回答例
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> s(9);
	for(auto &v : s) cin >> v;
	auto valid = [&](int x, int y) {
		return clamp(x, 0, 8) == x and clamp(y, 0, 8) == y and s[x][y] == '#';
	};
	set<set<pair<int, int>>> st;
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			for(int dx = -8; dx < 9; dx++) {
				for(int dy = -8; dy < 9; dy++) {
					if(!dx and !dy) continue;
					int i2 = i + dx, j2 = j + dy;
					int i3 = i2 - dy, j3 = j2 + dx;
					int i4 = i3 - dx, j4 = j3 - dy;
					if(valid(i, j) and valid(i2, j2) and valid(i3, j3) and valid(i4, j4)) {
						set<pair<int, int>> sq;
						sq.insert({i, j});
						sq.insert({i2, j2});
						sq.insert({i3, j3});
						sq.insert({i4, j4});
						st.insert(sq);
					}
				}
			}
		}
	}
	cout << st.size() << endl;
}
*/

int	main()
{
	string	s[9];
	for (int i = 0; i < 9; i++)
		cin >> s[i];
	int	count = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (s[i][j] == '#')
			{
				for (int k = j + 1; k < 9; k++)
				{
				}
			}
		}
	}
	return (0);
}
