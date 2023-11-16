#include <iostream>
#include <vector>
using namespace std;



int find_num(int x, int y) {
	int ans = 0;
	for (int i = 1; i <= x; i++) { // x축 이동
		ans += i;
	}
	for (int i = 1; i < y; i++) { // y축 이동
		ans += x;
		x++;
	}
	return ans;
}


pair<int,int> find_point(int point ) {
	int x = 1, y = 1, flag=1,ans=1;
	while (true) {
		if (point <= ans) { // 몇 번째 행 대각선에 있는지 확인
			while (true) {
				if (point == ans) {
					return make_pair(y,x);
				}
				else {
					y--;
					x++;
					ans--;
				}
			}
		}
		else {
			flag++; 
			ans += flag; // 숫자
			y++;
		}
	}
}
int main() {
	int t_c; cin >> t_c; // test_case;

	for (int i = 0; i < t_c; i++) {
		int a, b;
		cin >> a >> b;
		pair <int, int> p1 = find_point(a);
		pair <int, int> p2 = find_point(b);
		int x_p = p1.first + p2.first; 
		int y_p = p1.second + p2.second;
		cout << "#" << i + 1 << " " << find_num(x_p, y_p) << endl;
	}
	return 0;
}