#include <bits/stdc++.h>
using namespace std;
vector<pair<int, string>> v;
vector <string> s;



int main(){

	int num; cin >> num;
	for (int i = 0; i < num; i++) {
		string str; cin >> str;

		if (find(s.begin(), s.end(), str) == s.end()) { // 중복되는 값은 안 넣음.
			s.push_back(str);
			v.push_back(make_pair(str.size(), str));
		}

	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << '\n';
	}

	return 0;
} //main