#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int recur(int num, int cnt) {
	if (cnt < 1)
		return 1;
	else {
		return num * recur(num, cnt - 1);
	}
}

int main() {
	for (int i = 0; i < 10; i++) {
		int tmp;
		cin >> tmp;
		int a, b;
		cin >> a >> b;
		int ans = recur(a, b);
		cout << "#" << i + 1 << " " << ans << endl;
		ans = 1;
	}
	return 0;
}