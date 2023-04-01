#include "bits/stdc++.h"

using namespace std;

int	main()
{
	vector<string>	board(8);
	for (int i = 0; i < 8; i++)
		cin >> board[i];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[i][j] == '.')
				continue;
			else
			{
				cout << char('a' + j) << 8 - i << endl;
				return (0);
			}
		}
	}
	return (0);
}
