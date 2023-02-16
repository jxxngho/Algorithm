#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001] = { 0, };

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s1, s2; cin >> s1 >> s2; 

	for (int i = 1; i <=s1.size(); i++) {
		for (int j = 1; j <=s2.size(); j++) {

			if (s1[i-1] == s2[j-1]) { // 같은 문자면 +1 
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else { // 같은 문자가 아닐 시 바로 전 행, 열 중 큰 값 
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	cout << dp[s1.length()][s2.length()] << '\n'; // 가장 긴 공통문자열

	return 0;
} //main