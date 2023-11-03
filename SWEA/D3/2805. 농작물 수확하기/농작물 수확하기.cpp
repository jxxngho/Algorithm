#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;
int arr[50][50] = { 0, }; // 농장의 크기

int main() {
	int test_case= 0;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int ans = 0; // 정답 출력
		int num; 
		cin >> num;
		for (int j = 0; j <num; j++) { // 초기화
			string tmp;
			cin >> tmp;
			for (int k = 0; k < tmp.size(); k++) {
				arr[j][k] = tmp[k] - '0';
			}
		}
		
		// 위 삼각형
		for (int i = 0; i < num / 2; i++) {
			for (int j = num / 2 - i; j <= num / 2 + i; j++) {
				ans += arr[i][j];
			}
		}

		// 아래 삼각형
		for (int i = 0; i <= num / 2; i++) {
			for (int j = i; j < num - i; j++) {
				ans += arr[i + num / 2][j];
			}
		}


		cout << "#" << i + 1 << " " << ans << endl;
		memset(arr, 0, sizeof(arr));
	}


	return 0;
}