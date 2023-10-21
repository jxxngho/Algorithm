#include <bits/stdc++.h>
using namespace std;
int arr[10001] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M; // 자연수
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = tmp;
	}
	int start_idx = 0;
	int end_idx = 0;
	int sum = 0;
	int ans = 0;

	while (start_idx <= N) { // start_idx가 마지막에 갈때까지

		if (sum >= M || end_idx==N){  // sum이 더 클 경우 or end가 마지막에 있을 경우
			start_idx++;
			sum -= arr[start_idx];
		}
		else { // 작을경우
			end_idx++;
			sum += arr[end_idx];
		}
		if (sum == M) { // 같을 경우
			ans++;
		}
	}
	cout << ans;

	return 0;
}