#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N; // 자연수
	int start_idx = 1;
	int end_idx = 1; 
	int sum = 1; 
	int ans = 1; // N경우 포함

	cin >> N;

	while(end_idx!=N) {
		if (sum == N) { // 정답일 경우 start 오른쪽
			ans++; 
			sum -= start_idx;
			start_idx++;

		}
		else if (sum < N) { // 자연수N보다 작을 경우
			end_idx++;
			sum += end_idx;

		}
		else { // 자연수N보다 클 경우 
			sum -= start_idx;
			start_idx++;
		}
	}

	cout << ans;

	return 0;
}

