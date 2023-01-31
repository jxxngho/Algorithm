#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001] = { 0, };
int sum[1001] = { 0, };


// dp[i][j] = i번째부터 j번째 카드가 있을 때 얻을 수 있는 최대 값

void card(int sum[], int t) {
	int cnt = t % 2;
	if (cnt == 1) { //홀수 개수가 들어올 경우
		for (int i = 1; i <= t; i++) {
			dp[i][i] = sum[i]; //홀수 개수 있을 때 근우가 한 개 더 뽑기 때문
		}
	}
	for (int i = 1; i <= t; i++) {
		int k = 1;
		for (int j = i + 1; j <= t; j++) {
			if (cnt % 2 == 0) { // cnt 짝수일때는 내 차례, 왼쪽카드나 오른쪽 카드를 뽑고 플레이한 결과 중에 큰 거 저장
				dp[k][j] = max(dp[k][j - 1] + sum[j], dp[k + 1][j] + sum[k]);
				k++;
			}
			else { // cnt 홀수일때는 상대 차례, 내 점수를 최소화해야 하니 min 사용
				dp[k][j] = min(dp[k][j - 1], dp[k + 1][j]);
				k++;
			}		
		}
		cnt++;
	}
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int  t; cin >> t;
		for (int i = 1; i <= t; i++) {
			int tmp;
			cin >> tmp;
			sum[i] = tmp;
		}
		card(sum, t);
		cout << dp[1][t] << endl;
		memset(dp, 0, sizeof(dp));
		memset(sum, 0, sizeof(sum));
	}
	return 0;
}