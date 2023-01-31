#include <bits/stdc++.h>
using namespace std;
int dp[301][3] = { 0, };
int score[301] = { 0, };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num; cin >> num; // 계단의 개수
	for (int i = 1; i <= num; i++) {
		int tmp; cin >> tmp;
		score[i] = tmp;
	}

	dp[1][1] = score[1];
	dp[2][1] = score[1]+score[2];
	dp[2][2] = score[2];


	for (int i = 3; i <= num; i++) { //
		for (int j = 1; j <3; j++) {
			if (j == 1) {
				dp[i][j] = score[i] + max(dp[i-1][j + 1], max(dp[i - 2][1], dp[i - 2][2]));
			}
			else {
				dp[i][j] = max(dp[i - 2][1], dp[i - 2][2])+score[i];
			}
		}
	}
	int ans = max(dp[num][1], dp[num][2]);
	
	cout << ans << endl;

}
