#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int cnt;
	vector <int> v;
	cin >> cnt; //test case
	for (int i = 0; i < cnt; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	int tmp = v[0];
	int ans = v[0];
	for (int i = 1; i < v.size(); i++) {
		tmp = tmp + v[i];
		ans += tmp;
	}
	cout << ans << endl;

	
}
