#include <bits/stdc++.h>
using namespace std;
vector <int> level;


int main(){
	int num;
	cin >> num; // 레벨의 수
	for (int i = 0; i < num; i++) {
		int tmp;
		cin >> tmp;
		level.push_back(tmp);
	}
	int ans = 0; // 정답
	for (int i = level.size() - 1; i > 0; i--) {
		if (level[i] - level[i - 1] <0) {
			int tmp = level[i - 1] - level[i] + 1;
			level[i - 1] -= tmp;
			ans += tmp;
		}
		else if (level[i] == level[i - 1]) {
			level[i - 1] -= 1;
			ans++;
		}
	}
	cout << ans << endl;
}

