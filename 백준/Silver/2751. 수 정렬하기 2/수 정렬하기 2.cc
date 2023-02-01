#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num; cin >> num;

	while (num--) {
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;
} //main