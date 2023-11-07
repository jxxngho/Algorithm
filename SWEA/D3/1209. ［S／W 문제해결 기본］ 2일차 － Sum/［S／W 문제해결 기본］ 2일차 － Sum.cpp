#include <iostream>
#include <algorithm>
using namespace std;
int arr[101][101] = { 0, };
int main() {
	for (int i = 0; i < 10; i++) {
		int tmp;
		cin >> tmp;
		int max_num = -100;
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> tmp;
				arr[i][j] = tmp;
			}
		}
		for (int i = 0; i < 100; i++) {
			int row=0, col=0;
			for (int j = 0; j < 100; j++) {
				row += arr[i][j];
				col += arr[j][i];
			}
			max_num = max(max_num, max(row, col));
		}
		
		int sum = 0, sum2=0;
		for (int i = 0; i < 100; i++) {
			sum = arr[i][i];
		}
		for (int i = 0; i < 100; i++) {
			sum2 = arr[i][99-i];
		}
		max_num = max(max_num, max(sum, sum2));
		cout << "#" << i + 1 << " " << max_num << endl;
	}
	return 0;
}