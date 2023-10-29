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
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}