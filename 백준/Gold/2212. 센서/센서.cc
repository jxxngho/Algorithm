#include <bits/stdc++.h>
using namespace std;
vector <int> v;
vector <int> ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num; // 센서의 개수
	int cnt; // 집중국의 개수
	cin >> num >> cnt;
	for (int i = 0; i <num; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	if (num <= cnt) { // 집중국이 더 많을 경우
		cout << 0 << endl;
		return 0;
	}
	sort(v.begin(), v.end()); //정렬
	for (int i = 1; i < num ; i++) { // 각 센서별 차이
		ans.push_back(v[i] - v[i - 1]);
	}
	sort(ans.begin(), ans.end());
	int sum = 0;
	for (int i = 0; i < num - cnt; i++) { // 센서있는 곳은 0이니 그만큼 뺴주고
		sum += ans[i];
	}

	cout << sum << endl;
	


}