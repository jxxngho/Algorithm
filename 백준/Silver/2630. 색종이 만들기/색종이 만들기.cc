#include <bits/stdc++.h>
using namespace std;
int arr[129][129];
int ans[2]; // [0] = 0, [1] = 1 

void divide_conquer(int num, int x, int y) {

	int pivot = arr[y][x];
	bool check = true;

	if (num != 1) {
		for (int j = y; j < y + num; j++) {
			for (int i = x; i < x + num; i++) {
				if (pivot != arr[j][i]) {
					check = false;
					break;
				}
			}
			if (!check) {
				break;
			}
		}
	}
	if (check) {
		ans[pivot]++;
	}
	else {
		divide_conquer(num / 2, x,y); // 2사분면
		divide_conquer(num / 2, x+num/2, y); // 1사분면
		divide_conquer(num / 2, x , y + num / 2); // 3사분면
		divide_conquer(num / 2, x + num / 2, y + num / 2); // 4사분면
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
	cout << ans[0] << '\n';
	cout << ans[1] << '\n';
	return 0;
} //main