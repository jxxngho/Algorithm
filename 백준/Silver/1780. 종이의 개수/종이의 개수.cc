#include <bits/stdc++.h>
using namespace std;
int arr[2188][2188];
int ans[3]; // [0] = -1, [1] = 0 , [2] = 1

void divide_conquer(int num, int x, int y) {

	int tmp = arr[y][x];
	bool same = true;
	if (num == 1) { // 쪼개서 하나만 남은 상황
		same = true;
	}
	else { 
		for (int i = y; i < num + y; i++) {
			for (int j = x; j < num + x; j++) {
				if (arr[i][j] != tmp) { // 다른 숫자가 있는 경우
					same = false;
					break;
				}
			}
		}
	}
	if (same) { // 만약 모두 숫자가 같더라면
		ans[tmp+1]++;
	}
	else {
		divide_conquer(num / 3, x,y); // 1번
		divide_conquer(num / 3, x+num/3, y); // 2번
		divide_conquer(num / 3, x + 2* (num / 3), y); // 3번

		divide_conquer(num / 3, x, y + num / 3); // 4번
		divide_conquer(num / 3, x + num / 3, y + num / 3); // 5번
		divide_conquer(num / 3, x + 2 * (num / 3), y + num / 3); // 6번

		divide_conquer(num / 3, x, y +2*( num / 3)); // 7번
		divide_conquer(num / 3, x + num / 3, y + 2*(num / 3)); // 8번
		divide_conquer(num / 3, x + 2 * (num / 3), y + 2 * (num / 3)); //9번
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num; cin >> num;
	int tmp;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cin >> tmp;
			arr[i][j] = tmp;
		}
	}
	divide_conquer(num, 0, 0);

	for (int i = 0; i < 3; i++) {
		cout << ans[i] << "\n";
	}

	return 0;
} //main