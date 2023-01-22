#include "bits/stdc++.h"

using namespace std;

string	send_initial_back(string s, int n)
{
	char	c = s[0];
	s.erase(s.begin());
	// nは配列番号
	s.insert(s.begin() + n, c);
	return (s);
}

int	search_char(string s, string t, char c)
{
	int	i = t.rfind(c);
	// そもそもその文字がないときのみエラーなのでは？？
	if (i == -1)
	{
		cout << "-1" << endl;
		return (-1);
	}
	// ここで動的計画法？？
	int	j = s.rfind(t[i - 1]);
	return (j);
}

int	main()
{
	int	n;
	string	s, t;
	cin >> n >> s >> t;
	long long	count = 0;
	while (true)
	{
		cout << s << endl;
		if (s == t)
		{
			cout << count << endl;
			return (0);
		}
		int	num = search_char(s, t, s[0]);
		if (num == -1)
			return (-1);
		s = send_initial_back(s, num);
		// cout << num << " " << s << endl;
		count++;
	}
	return (0);
}