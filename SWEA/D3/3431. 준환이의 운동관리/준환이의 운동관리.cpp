#include <iostream>

using namespace std;





int main() {
	int t_c = 0;
	cin >> t_c; // test case

	for (int i = 0; i < t_c; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		// a~b 운동시간 범위
		// c 운동한 시간
		int ans = 0;
		if (c >= a && c <= b) { // 적정
			ans = 0;
		}
		else if (c > b) { // 필요한 양보다 더 많은 운동
			ans = -1;
		}
		else {
			ans = a - c;
		}

		cout << "#" << i + 1 << " " << ans << endl;
	}
	return 0;
} // main