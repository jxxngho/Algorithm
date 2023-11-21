#include <bits/stdc++.h>
using namespace std;
string str = "", ans = "", tmp = "";
int  cnt = 0;


int  Polyomino(int cnt) {
	if (cnt % 2 != 0) { // 못 만드는 경우
		cout << -1 << '\n';
		return 0;
	}
	else { // 만들 수 있는 경우
		int A_cnt = cnt / 4;
		int B_cnt = (cnt - 4 * A_cnt) / 2;
		for (int j = 0; j < A_cnt * 4; j++) ans += "A";
		for (int j = 0; j < B_cnt * 2; j++) ans += "B";

	}
	return 1;
}

int main() {
	cin >> str;

	// AAAA , BB 

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'X') cnt++;
		else {
			if (!Polyomino(cnt))return 0;
			ans += ".";
			cnt = 0;
		}
	}
	if (!Polyomino(cnt)) return 0;
	
	cout << ans << '\n';
	return 0;
}

