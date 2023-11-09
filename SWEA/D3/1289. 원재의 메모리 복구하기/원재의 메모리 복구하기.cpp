#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int t_c = 0;
	cin >> t_c;

	for (int i = 0; i < t_c; i++) {
		string str;
		cin >> str;
		int ans = 0; // 정답
		char c = '0';
		for (int j = 0; j < str.size(); j++) {
			if (c == str[j]) continue;
			else {
				c = str[j]; // 바뀔때마다 count
				ans++;
			}
		}
		cout << "#" << i + 1 << " " << ans << endl;


	} // t_c


	return 0;
}