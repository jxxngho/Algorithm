#include <iostream>

using namespace std;

int arr[1000001] = { 0, };
int main() {
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int tmp;
		cin >> tmp;
		cout << "#" << i + 1 << " " << tmp / 3 << endl;
	}

	return 0;
}