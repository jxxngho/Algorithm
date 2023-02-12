#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num; cin >> num; // 삼각형의 크기
	vector <vector<int>> v(num+1, vector<int>(num+1, 0));
	vector <vector<int>> dp(num+1, vector<int>(num+1, 0));
	if (num == 1) { // num이 1일 경우 
		int tmp; cin >> tmp;
		cout << tmp << '\n';
		return 0;
	}

	//초기화
	for (int i = 1; i <=num; i++) {
		for (int j = 1; j <= i; j++) {
			int tmp; cin >> tmp;
			v[i][j] = tmp;
		}
	} 

	// 초기값 설정
	dp[2][1] = v[1][1] + v[2][1];
	dp[2][2] = v[1][1] + v[2][2];

	for (int i = 3; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 ) { // 양 끝일 경우
				dp[i][j] = dp[i - 1][j] + v[i][j];
			}
			else if(j == i) { // 양 끝일 경우
				dp[i][j] = dp[i - 1][j - 1] + v[i][j];
			}
			else { //대각선 왼쪽 위 또는 대각선 오른쪽 위에서 큰 거랑 더하기
				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + v[i][j]; 
			}
		}
	}

	// max 값 구하기
	int max = dp[num][1];
	for (int i = 2; i <= num; i++) {
		if (max < dp[num][i]) {
			max = dp[num][i];
		}
	}
	cout << max << '\n';


	return 0;
} //main