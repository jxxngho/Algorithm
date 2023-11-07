#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int ans = 1;
int recur(int num, int cnt) {
	ans *= num;
	cnt--;
	if (cnt != 0) recur(num, cnt);
	return ans;
}


int main() {

	for (int i = 0; i < 10; i++) {
		int tmp;
		cin >> tmp;
		int a, b;
		cin >> a >> b;
		cout << "#" << i + 1 << " " << recur(a,b) << endl;
		ans = 1;
	}
	return 0;
}