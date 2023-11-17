#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t_c = 0; cin >> t_c;
	for (int i = 0; i < t_c; i++) {
		int x, y; 
		cin >> x >> y;
		int ans = 0;
		if (x + y >= 24) {
			ans = x + y - 24;
		}
		else {
			ans += x + y;
		}
		cout << "#" << i + 1 << " " << ans << endl;
	}
	return 0;
}