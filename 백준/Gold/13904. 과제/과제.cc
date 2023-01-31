#include <bits/stdc++.h>
using namespace std;
vector <pair<int, int>> v1;

int main() {
	int count; cin >> count;
	while (count--) {
		int num1, num2;
		cin >> num1 >> num2;
		v1.push_back(make_pair(num1, num2));
	}
	sort(v1.rbegin(), v1.rend());
	vector<int> v2;
	int pivot = v1[0].first; // 제일 큰 마감일 수 
	int sum = 0;
	int cnt = 0;

	for (int i = 0; i < v1[0].first; i++) {
		for (int j = cnt; j < v1.size(); j++) {
			if (pivot == v1[j].first) { // 만약에 마감일 수 같은 거 있으면 저장
				v2.push_back(v1[j].second);
				cnt++;
			}
			else {
				break;
			}
		}
		pivot--; // 마감일 수 하나씩 줄여가면서 진행

		if (v2.size() != 0) {
			sort(v2.rbegin(), v2.rend());
			sum += v2[0]; //제일 큰 값 저장
			v2.erase(v2.begin());
		}
		if (pivot <= 0) { //종료조건
			cout << sum << endl;
			return 0;
		}
	}
	cout << sum << endl;
	return 0;
}
