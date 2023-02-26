#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dp[2][100001] = { 0 }; // 0 : 2원, 1: 5원
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num; cin >> num;
	dp[0][1] = -1;
	dp[1][1] = -1;
	for (int i = 2; i <= num; i++) { // 2원만 가지고 있을 경우
		if (i % 2 == 0) { 
			dp[0][i] = i / 2;
		}
		else {
			dp[0][i] = -1; // 거슬러 줄 수 없는 경우
		}

		if (i <= 5) { // 2,5원 둘 다 가지고있는데 거스름돈이 5원보다 작거나 같은 경우
			dp[1][i] = dp[0][i]; // 
		}
	}

	for (int i = 5; i <= num; i++) {
		if (i % 5 == 0) { // 5원가지고 나눠질 경우
			dp[1][i] = i / 5;
		}
		else {
			if (dp[1][i - 5] == -1) {
				dp[1][i] = dp[0][i];
			}
			else {
				dp[1][i] = dp[1][i - 5]+1;
			}
		}
	}
	cout << dp[1][num] << '\n';

}