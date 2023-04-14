#include <bits/stdc++.h>
using namespace std;

int main() {
	int num, k;
	cin >> num >> k;
	vector <int> v;

	for (int i = 0; i < num; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	int cnt = 0;
	while(true) {
		if (k == 0) {
			cout << cnt << endl;
			return 0;
		}
		int tmp = 0;
		for (int j = 0;; j++) {
			if (v[j] > k ) {
				tmp = v[j - 1];
				break;
			}
			else if (j == v.size() - 1) {
				tmp = v[j];
				break;
			}
		}
		
		cnt += k / tmp;
		k -= tmp *( k / tmp);
	}


}
	
