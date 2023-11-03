#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;


int main() {
	// 테케가 몇개인지 안나와있어 당황 ,,
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num; // 몇 번째인지
		queue <int> q;
		for (int j = 0; j < 8; j++) {
			int tmp;
			cin >> tmp;
			q.push(tmp);
		}
		int minus = 1;
		while (true) {
			if (q.back() > 0) { // 맨 뒷 숫자 확인
				int first_num = q.front();
				q.pop();
				if (first_num - minus <=0 ) {
					q.push(0);
				}
				else {
					q.push(first_num - minus);
					minus++;
				}	
			}
			else {
				break;
			}
			if (minus > 5) minus = 1; // 사이클 바뀔 때
		} // while

		cout << "#" << num<<" ";
		for (int i = 0; i < 8; i++) {
			int first_num = q.front();
			cout << first_num << " ";
			q.pop();
		}
		cout << endl;

	}

	return 0;
}