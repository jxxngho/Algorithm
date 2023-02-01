#include <bits/stdc++.h>
using namespace std;
int dp[1000001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num; cin >> num;
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= num; i++) {
		int a = 100000;
		int b = 100000;
		int c = 100000;
		
		if (i% 3 == 0) {
			a = dp[i/3]+1;
		}
		if (i % 2 == 0) {
			b = dp[i/2]+1;
		}
		c = dp[i - 1]+1;
		dp[i] = min(a, min(b, c));
		
	}
	cout << dp[num] << '\n';



	return 0;
} //main