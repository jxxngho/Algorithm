#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int cnt; cin >> cnt; // 과일의 개수
	int leng; cin >> leng; // 스네이크버드의 초기길이
	vector<int> v;
	while (cnt--) {
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end()); // 오름차순 정렬

	for (int i = 0; i < v.size(); i++) {
		if (leng >= v[i]) { // 비교해서 길이가 더 길면 과일 먹음.
			leng++;
		}
		else { // 더 이상 먹을 과일이 없을 때
			break;
		}
	}

	cout << leng << '\n';

	return 0;
} //main