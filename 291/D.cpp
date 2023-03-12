#include "bits/stdc++.h"

using namespace std;
using ll = long long;
const ll MOD = 998244353;

// chatGPT
// int main() {
// 	int N;
// 	cin >> N;
// 	vector<pair<int, int>> data(N);
// 	for (int i = 0; i < N; i++)
// 		cin >> data[i].first >> data[i].second;
// 	vector<vector<ll>> dp(N, vector<ll>(2));
// 	dp[0][0] = dp[0][1] = 1;
// 	for (int i = 1; i < N; i++)
// 	{
// 		for (int pre = 0; pre < 2; pre++)
// 		{
// 			for (int nxt = 0; nxt < 2; nxt++)
// 			{
// 				if (data[i - 1].first != data[i].first && data[i - 1].second != data[i].second)
// 				{
// 					dp[i][nxt] += dp[i - 1][pre];
// 					dp[i][nxt] %= MOD;
// 				}
// 			}
// 		}
// 	}
// 	cout << (dp[N - 1][0] + dp[N - 1][1]) % MOD << endl;
// 	return 0;
// }

// int	main()
// {
// 	int	n;
// 	cin >> n;
// 	vector<pair<int, int>>	card(n);
// 	for (int i = 0; i < n; i++)
// 	{
// 		int	a, b;
// 		cin >> card[i].first >> card[i].second;
// 	}
// 	int	pre = -1;
// 	for (auto it = card.begin(); it != card.end(); ++it)
// 	{
// 		auto const &c = *it;
// 		if (pre == c.first && /* が同じ*/)pre == c.second)
// 		{
// 			card.erase(it);
// 			--it;
// 			continue;
// 		}
// 		pre = c.first;
// 	}
// 	for (auto const &p: card)
// 	{
// 		cout << p.first << " " << p.second << endl;
// 	}
// 	return (0);
// }