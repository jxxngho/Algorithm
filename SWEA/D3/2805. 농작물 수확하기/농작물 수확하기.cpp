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
		int a = 1;
		int flag = num / 2; // 2
		for (int h = 0; h <= num/2; h++) { // 커지는 구간
			for (int g = 0; g < a; g++) {
				ans += arr[h][flag + g];
			}
			flag--;
			a += 2;
		}
		a -= 4;
		flag += 2;
		for (int h = num / 2 + 1; h < num; h++) { // 작아지는 구간
			for (int g = 0; g < a; g++) {
				ans += arr[h][flag + g];
			}
			flag++;
			a -= 2;
		}
		cout << "#" << i + 1 << " " << ans << endl;
		memset(arr, 0, sizeof(arr));
	}


	return 0;
}