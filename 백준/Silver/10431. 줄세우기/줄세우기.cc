#include <iostream>

using namespace std;

int arr[21] = { 0, };
int main() {
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int tmp;
		cin >> tmp;
		for (int j = 0; j < 20; j++) {
			cin >> tmp;
			arr[j] = tmp;
		}
		int ans = 0;
		for (int i = 0; i < 20; i++) {
			for (int j = i + 1; j < 20; j++) {
				if (arr[i] > arr[j]) ans++;
			}
		}
		cout << i + 1 << " " << ans << endl;
	}

	return 0;
}