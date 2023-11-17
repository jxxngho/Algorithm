#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int dp[21][10000] = { 0, };
int score[1000] = { 0, };
int cal[1000] = { 0, };
int main() {
	int t_c; cin >> t_c; // test_case
	
	for (int i = 0; i < t_c; i++) {
		int N = 0, L = 0; // 재료의 수, 제한 칼로리
		cin >> N >> L;
		for (int j = 1; j <= N; j++) {
			int a, b;
			cin >> a >> b;
			score[j] = a;
			cal[j] = b;
		}

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= L; j++) {
				if (cal[i] <= j) { // 0/1 knapsack
					dp[i][j] = max(dp[i - 1][j], score[i] + dp[i - 1][j - cal[i]]);
				}
				else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}

		cout << "#" << i + 1 << " " << dp[N][L] << endl;
		memset(dp, 0, sizeof(dp));
		memset(score, 0, sizeof(score));
		memset(cal, 0, sizeof(cal));
	}

	return 0;
}