#include <bits/stdc++.h>
using namespace std;
int one[1000001] = { 0, };
int two[1000001] = { 0, };
vector <int> ans;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	int one_p = 1; // 배열포인터
	int two_p = 1; // 배열포인터
	int tmp; // 배열내용
	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		one[i] = tmp;
	}

	for (int i = 1; i <= M; i++) {
		cin >> tmp;
		two[i] = tmp;
	}

	while (one_p != N + 1 && two_p != M + 1) {
		if (one[one_p] <= two[two_p]) { // 배열1이 더 클 경우
			ans.push_back(one[one_p]);
			one_p++;
		}
		else {
			ans.push_back(two[two_p]); // 배열2가 더 클 경우
			two_p++;
		}
	}

	//한쪽이 다 끝났을 경우 while문 break
	if (one_p == N + 1) { // 배열1이 다 끝났을 경우
		for (int j = two_p; j <= M; j++) {
			ans.push_back(two[j]);
		}
	}
	else {
		for (int j = one_p; j <= N; j++) { // 배열2가 다 끝났을 경우
			ans.push_back(one[j]);
		}
	}

	for (int i = 0; i < M + N; i++) {
		cout << ans[i] << " ";
	}


	return 0;
}