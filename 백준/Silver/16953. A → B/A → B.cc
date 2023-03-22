#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int dp[2][100001] = { 0 }; // 0 : 2원, 1: 5원
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, cnt;
	cin >> num >> cnt;

	int ans = 1; // +1 조건 적용
	
	while (true) {
		if (num == cnt) { // 같아지는 경우 종료
			cout << ans << "\n";
			return 0;
		}
		else if (num > cnt) { // 만들 수 없는 경우
			cout << -1 << "\n";
			return 0;
		}
		
		// 연산
		if (cnt % 2 == 0) {
			cnt = cnt/ 2;
		}
		else {
			string tmp = to_string(cnt); // int to string
			if (tmp[tmp.size() - 1] == '1') { // 마지막이 1이면 
				tmp.pop_back(); // 삭제 후 
				cnt = stoi(tmp); // ans에 저장
			}
			else { // 2로도 안 나눠지고 1이 아닐 시 --> 만들 수 없는 경우
				cout << -1 << "\n";
				return 0;
			}
		}
		ans++; 

	}
}