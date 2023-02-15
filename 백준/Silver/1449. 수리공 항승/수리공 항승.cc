#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num; cin >> num; // 물이 새는 곳의 개수
	int length; cin >> length; // 테이프의 길이
	vector<int> v; // 물이 새는 곳의 위치

	while (num--) {
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end()); // 오름차순 정렬

	double pivot = v[0] - 0.5 + length; // 맨 처음 테이프 붙이는 범위
	int count = 1; // 필요한 테이프의 개수
	for (int i = 1; i < v.size(); i++) {
		if (v[i] < pivot) { // 테이프가 붙은 범위 안에 있을 경우
			continue;
		}
		else {
			count++;
			pivot = v[i] - 0.5 + length; // 테이프 붙이는 범위
		}
	}

	cout << count << '\n';
	return 0;
} //main