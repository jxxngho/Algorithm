#include <iostream>
using namespace std;
int arr[11][11] = { 0, };

int main() {
	int t_c = 0;
	cin >> t_c;

	for (int i = 0; i < t_c; i++) {
		int num; cin >> num;
		for (int i = 1; i <= num; i++) {
			for (int j = 1; j <= i; j++) {
				if (j == 1 || j == i) arr[i][j] = 1;
				else arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}

		cout << "#"<< i + 1 << endl;
		for (int i = 1; i <= num; i++) {
			for (int j = 1; j <= i; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}


	} //for

	return 0;
}