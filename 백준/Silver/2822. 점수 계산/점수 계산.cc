#include <bits/stdc++.h>
using namespace std;
vector <pair<int, int>> v(8);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int tmp;
	for (int i = 0; i < 8; i++) {
		cin >> v[i].first;
		v[i].second = i + 1;
	}

	sort(v.begin(), v.end(),greater<>());

	vector<int> num; // 문제 번호
	int sum = 0; // 최종 점수

	for (int i = 0; i < 5; i++) {
		sum += v[i].first;
		num.push_back(v[i].second);
	}
	cout << sum << '\n';
	sort(num.begin(), num.end());

	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << " ";
	}


	return 0;
} //main