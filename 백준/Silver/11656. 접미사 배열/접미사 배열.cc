#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	vector<string> v;

	cin >> str;
	while (str.size() != 0) {
		v.push_back(str);
		str.erase(0, 1); // 0번위치부터 1개 삭제
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}
	
