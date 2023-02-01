#include <bits/stdc++.h>
using namespace std;


int main() {
	string tmp, ans;
	cin >> tmp;
	cin >> ans;

	while (true) {
		if (tmp.size() == ans.size()) {
			if (tmp == ans) {
				cout << 1 << '\n';
				return 0;
			}
			else {
				cout << 0 << '\n';
				return 0;
			}
		}

		int num = ans.size();
		if (ans[num - 1] == 'A') {
			ans.pop_back();
		}
		else {
			ans.pop_back();
			reverse(ans.begin(), ans.end());

		}
	}
}