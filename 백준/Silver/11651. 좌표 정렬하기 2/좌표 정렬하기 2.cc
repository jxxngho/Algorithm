#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> v1;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	while (num--) {
		int tmp; int tmp2;
		cin >> tmp >> tmp2;
		v1.push_back(make_pair(tmp2,tmp));
	}
	sort(v1.begin(), v1.end());

	for (int i = 0; i<v1.size(); i++) {
		cout << v1[i].second << " " << v1[i].first << '\n';
	}

}
