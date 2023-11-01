#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
vector<int> arr(100);
int main() {
	int test_case = 10;

	for (int i = 0; i < test_case; i++) {
		int dump; cin >> dump;
		for (int j = 0; j < 100; j++) {
			int tmp; cin >> tmp;
			arr[j] = tmp;
		}

		for (int k = 0; k < dump; k++) {
			int min_index = min_element(arr.begin(), arr.end()) - arr.begin(); // 최솟값 인덱스
			int max_index = max_element(arr.begin(), arr.end()) - arr.begin(); //  최댓값 인덱스
			 // 평탄화
            arr[max_index]--; 
			arr[min_index]++;
		}
		int max = *max_element(arr.begin(), arr.end()); // 최댓값
		int min = *min_element(arr.begin(), arr.end()); // 최솟값
		cout<<"#"<<i+1<<" " << max - min << endl;
	
	}


	return 0;
}