#include <bits/stdc++.h>
using namespace std;

int main() {
	int broken_line, brand;
	cin >> broken_line >> brand;

	int ans = 0;
	vector <int> pack;
	vector <int> each;
	for (int i = 0; i < brand; i++) {
		int x, y;
		cin >> x >> y;
		pack.push_back(x);
		each.push_back(y);
	}
	sort(pack.begin(), pack.end());
	sort(each.begin(), each.end());
	int package = 0, package_each = 0, only_each = 0;
	if (broken_line >=6 && broken_line / 6 == 0) { // 패키지로만 샀을 때 
		// 나누어 떨어질때
		package = (broken_line / 6) * pack[0];
	}
	else { // 나머지가 남아서 하나 더 사야될때
		package = (broken_line / 6 + 1) * pack[0];
	}
	//  낱개로만 샀을 때
	only_each = broken_line * each[0];
	// 패키지사고 나머지는 낱개로
	package_each = broken_line / 6 * pack[0] + broken_line % 6 * each[0]; 

	cout << min(package, min(package_each,only_each)) << "\n";

}

