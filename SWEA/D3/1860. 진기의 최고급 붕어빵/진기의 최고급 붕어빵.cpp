#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;





int main() {
	int t_c = 0;
	cin >> t_c; // test case

	for (int i = 0; i < t_c; i++) {
		vector <int> v;
		int N, M, K;
		// N명에게 제공 , M초당 K개
		cin >> N >> M >> K;
		for (int j = 0; j < N; j++) {
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}

		sort(v.begin(), v.end());
		
		int cnt = 0; // 붕어빵 개수
		int seconds = 0; // 초
		int flag = 0; // 벡터 인덱스
		string str = "Possible";
		for (int i = 0; i <= v[v.size() - 1]; i++) {
			if (M == seconds) { //붕어빵 만들어지는 시간
				seconds = 0;
				cnt += K;
			}
			if (v[flag] == i) { //손님한테 붕어빵 주는 시간
				if (cnt <= 0) { //붕어빵 없을 때
					str = "Impossible";
					break;
				}
				flag++;
				cnt--;
			}	
			seconds++;
		}
		cout << "#" << i + 1 << " " << str << endl;
	}
	return 0;
} // main