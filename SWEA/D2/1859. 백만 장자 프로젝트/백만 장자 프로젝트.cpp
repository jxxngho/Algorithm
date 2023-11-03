#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int arr[1000001] = { 0, };
int main() {
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int num;
		cin >> num;
		for (int j = 0; j < num; j++) { //초기화
			int tmp; cin >> tmp;
			arr[j] = tmp;
		}
		long long ans = 0; // 정답
		int max_num = arr[num - 1]; 

		for (int i = num - 2; i >= 0; i--) { 
			if (arr[i] < max_num) {  // 최댓값과 i번째 날 값 빼기
				ans += max_num - arr[i];
			}
			else { // 최댓값 변경
				max_num = arr[i];
			}
		}
		cout << "#" << i + 1 << " " << ans << endl;
		memset(arr, 0, sizeof(arr));
	}

	return 0;
}