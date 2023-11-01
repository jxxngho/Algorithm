#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

int arr[1001] = { 0, }; // 건물높이 저장
int main() {
	// test_case = 10;

	for (int i = 0; i < 10; i++) {
		
		int cnt = 0,ans =0;
		cin >> cnt; // 건물 개수

		for (int j = 0; j < cnt; j++) {
			int tmp;
			cin >> tmp;
			arr[j] = tmp;
		}

		for (int k = 2; k < cnt - 2; k++) {
			if (arr[k - 1]<arr[k] && arr[k - 2]<arr[k] && arr[k + 1]<arr[k] && arr[k + 2]<arr[k]) {
				// 양쪽 두칸보다 더 높을 경우에
				ans += min(arr[k] - arr[k - 1], min( arr[k] - arr[k - 2], min(arr[k] - arr[k + 1], arr[k] - arr[k + 2])));
			};
		}
		memset(arr, 0, sizeof(arr));
		cout << "#" << i + 1 << " " << ans << endl;
	}
	return 0;
}