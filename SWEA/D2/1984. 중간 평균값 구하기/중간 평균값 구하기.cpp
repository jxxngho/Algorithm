#include<iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	int cnt = 0;
	cin >> cnt;
	int tmp;
	for (int i = 0; i < cnt; i++) {
		vector<int> v1;
		for (int j = 0; j < 10; j++) {
			cin >> tmp;
			v1.push_back(tmp);
		}
		sort(v1.begin(), v1.end());

		v1.erase(v1.begin() + 9); // 맨 끝 제거
		v1.erase(v1.begin()); // 맨 처음 제거

		float ans = 0.0;
		for (int k = 0; k < 8;k++) {
			ans += v1[k];
		}
		ans = ans / 8.0;
		cout << "#" << i + 1 << " " << floor(ans + 0.5) << endl;
        // 내림함수 floor()를 이용한 반올림 함수 구현
		// -> floor(N)에 N값에 0.5를 더하기
	}
	return 0;
}