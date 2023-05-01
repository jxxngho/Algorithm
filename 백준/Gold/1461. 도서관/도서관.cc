#include <bits/stdc++.h>
using namespace std;

vector <int> v_plus;
vector <int> v_minus;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, carry;
	int ans = 0; // 정답
	cin >> num >> carry;
	// 0보다 작은 것, 큰 것 분류
	for (int i = 0; i < num; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > 0) {
			v_plus.push_back(tmp);
		}
		else {
			v_minus.push_back(tmp);
		}
	}
	if (v_plus.size() == 1 && v_minus.size() == 0) {
		cout << v_plus[0] << endl;
		return 0;
	}
	if (v_minus.size() == 1 && v_plus.size() == 0) {
		cout << abs(v_minus[0])<< endl;
		return 0;
	}
	// 하나일 경우 바로 return 
	// 정렬
	sort(v_plus.begin(), v_plus.end());
	sort(v_minus.begin(), v_minus.end());
	
	if (v_minus.empty()) { // 0보다 큰 숫자만 있을 경우
		for (int i = v_plus.size() - 1; i >= 0; i -= carry) {
			ans += v_plus[i] * 2;
		}
		ans -= v_plus.back();
		cout << ans << endl;
		return 0;
	}
	else if(v_plus.empty()){ // 0보다 작은 점수만 있을 경우
		for (int i = 0; i <= v_minus.size(); i += carry) {
			ans += abs(v_minus[i]) * 2;
		}
		ans += v_minus.front();
		cout << ans << endl;
		return 0;
	}


	if (v_minus.size()<carry && v_plus.size()<carry) {
		if (abs(v_minus[0]) > v_plus.back()) {
			cout << v_plus.back() * 2 + abs(v_minus[0]);
			return 0;
		}
		else {
			cout << v_plus.back() + abs(v_minus[0])*2;
			return 0;
		}
	}
	else {
		for (int i = v_plus.size() - 1; i >= 0; i -= carry) {
			ans += v_plus[i] * 2;
		}
		for (int i = 0; i <= v_minus.size(); i += carry) {
			ans += abs(v_minus[i]) * 2;
		}

		if (abs(v_minus.front()) <= v_plus.back()) {
			ans -= v_plus.back();
		}
		else {
			ans += v_minus.front();
		}
	}
	cout << ans << endl;
}
