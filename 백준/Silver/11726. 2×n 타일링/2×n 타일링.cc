#include <bits/stdc++.h>
using namespace std;
int dp[1001] = { 0, };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= 1000; i++) {
		dp[i] = (dp[i-1]+dp[i-2])% 10007;
	}
	int tmp; cin >> tmp;
	cout << dp[tmp] << '\n';
}
