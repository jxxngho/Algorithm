#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> v(501, vector<int>(501, 0));
vector <vector<int>> ans(501, vector<int>(501, 0));

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num; cin >> num; // 삼각형의 크기

	if (num == 1) { // num이 1일 경우 
		int tmp; cin >> tmp;
		cout << tmp << '\n';
		return 0;
	}

	for (int i = 1; i <=num; i++) {
		for (int j = 1; j <= i; j++) {
			int tmp; cin >> tmp;
			v[i][j] = tmp;
		}
	} //초기화


	ans[2][1] = v[1][1] + v[2][1];
	ans[2][2] = v[1][1] + v[2][2];

	for (int i = 3; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 ) { // 양 끝일 경우
				ans[i][j] = ans[i - 1][j] + v[i][j];
			}
			else if(j == i) { // 양 끝일 경우
				ans[i][j] = ans[i - 1][j - 1] + v[i][j];
			}
			else {
				ans[i][j] = max(ans[i - 1][j - 1], ans[i - 1][j]) + v[i][j]; // 전에 값 중에 큰 것과 더하기해서 저장
			}
		}
	}

	int max = ans[num][1];
	for (int i = 2; i <= num; i++) {
		if (max < ans[num][i]) {
			max = ans[num][i];
		}
	}
	cout << max << '\n';


	return 0;
} //main