#include <bits/stdc++.h>
using namespace std;
int dp[2][5001] = { 0, }; 
// dp[0][num] = 3kg만 가지고 있을 경우
// dp[1][num] = 3kg, 5kg 가지고 있을 경우
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	dp[0][1] = -1;
	dp[0][2] = -1;
	dp[0][3] = 1;
	dp[1][1] = -1;
	dp[1][2] = -1;
	dp[1][3] = 1;
	dp[1][4] = -1;
	dp[1][5] = 1;
	for (int i = 4; i <= 5000; i++) { 
		if (i % 3 == 0) {
			dp[0][i] = i / 3;
		}
		else {
			dp[0][i] = -1;
		}
	}
	
	for (int i = 6; i <= 5000; i++) {
		if (dp[1][i - 5] == -1) { //3원으로는 못하는데
			if (i % 5 == 0) { // 5원으로는 가능한 경우
				dp[1][i] = i/5;
			}
			else { 
				if (dp[0][i] != -1) { //3원가지고만 가능한 경우
					dp[1][i] = dp[0][i];
				}
				else {
					dp[1][i] = -1;
				}
				 
			}			
		}
		else { 
			dp[1][i] = dp[1][i - 5] + 1;
		}
	}
	cout << dp[1][num] << endl;
}