#include <iostream>
using namespace std;
int hansu(int);
int main() {
	int number;
	cin >> number; //입력 수
	int result=hansu(number);
	cout << result;
}

int hansu(int num) {
	int count = 0;
	int arr[4];
	for (int i = 1; i <= num; i++) {
		arr[3] = i / 1000;
		arr[2] = (i - (i % 100)) / 100;
		if (arr[2] == 10) arr[2] = 0;
		arr[1] = (i - (arr[2] * 100) - (i % 10)) / 10;
		if (arr[1] == 100) arr[1] = 0;
		arr[0] = i % 10;
		if (i < 100) {
			count++; continue;
		}
		if (i < 1000) {
			{if ((arr[0] - arr[1]) == (arr[1] - arr[2])) count++; continue; }

		}
	}
	return count;
}