#include <bits/stdc++.h>
using namespace std;
long long dp[101] = { 0, };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;


	for (int i = 5; i <= 100; i++) {
		dp[i] = dp[i - 3] + dp[i - 2];
	}
	int cnt; cin >> cnt;
	while (cnt--) {
		int tmp; cin >> tmp;
		cout << dp[tmp] << endl;
	}
	

}
