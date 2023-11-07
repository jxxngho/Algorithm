#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	
	int t_c = 0;
	cin >> t_c;
	

	for (int i = 0; i < t_c; i++) {

		long long a;
		cin >> a;
		vector <long long> v;
		for (long long i = 1; i * i <= a; i++) {

			if (a % i == 0) {
				v.push_back(i);
				if (i != a / i) v.push_back(a / i); // 100일때 10 *10 두 번 들어가는거 방지
			}
		}
		sort(v.begin(), v.end());

		long long ans = 1000000000000;
		for (long long i = 0; i < v.size() / 2; i++) {
			ans = min(ans, v[i] + v[v.size() - 1-i] - 2);
		}

		// 홀수 개일때
		if (v.size() % 2 != 0) {
			ans = min(ans, v[v.size() / 2] * 2 - 2);
		}
		cout<<"#"<<i+1<<" "<<ans<<endl;
	}
	return 0;
}