#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t_c = 0; cin >> t_c;
	for (int i = 0; i < t_c; i++) {
		int sum=0;
		vector<int> v;
		int cnt; cin >> cnt;
		for (int i = 0; i < cnt; i++) {
			int tmp; cin >> tmp;
			v.push_back(tmp);
			sum += tmp;
		}
		float avg = sum / cnt;
		int ans = 0;
		for (int i = 0; i < cnt; i++) {
			if (v[i] <= avg) ans++;
		}
		cout << "#" << i + 1 << " " << ans << endl;
	}
	return 0;
}