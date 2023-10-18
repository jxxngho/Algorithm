#include <bits/stdc++.h>
using namespace std;
int sum[1025][1025] = { 0, };

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int cnt = 0; 
	int inp = 0;
	cin >> cnt >> inp;

	int tmp = 0;
	for (int i = 1; i <= cnt; i++) {
		for (int j = 1; j <= cnt; j++) {
			cin >> tmp;
			sum[i][j] = tmp + sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1]; // 구간합 
		}
	}

	for (int i = 0; i <inp; i++) {
		int x1, x2, y1, y2;
		cin >> y1 >> x1 >> y2 >> x2;
		cout << sum[y2][x2] - sum[y2][x1 - 1] - sum[y1 - 1][x2] + sum[y1 - 1][x1 - 1]<<'\n'; 
		// 중복으로 빼준거 더해주기
	}




	return 0;
}

