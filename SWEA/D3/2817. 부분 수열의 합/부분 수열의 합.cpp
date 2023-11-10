#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int ans = 0; // 정답
int N, A; // N개의 자연수, A : 합
vector <int> v;
void dfs(int num, int s_sum) {

	if (s_sum == A) { // 부분 수열의 합
		ans++;
		return;
	}
	else if (num >= v.size() - 1 || s_sum > A) { // 부분수열의 합을 넘거나 인덱스 오버
		return;
	}
	else {
		dfs(num+1, s_sum); // i번째 원소를 더 하지 않았을 경우
;		s_sum += v[num+1];
		dfs(num+1, s_sum); // i번째 원소를 더했을 경우
	}

}

int main() {
	int t_c = 0;
	cin >> t_c;

	for (int i = 0; i < t_c; i++) {
		cin >> N >> A;

		for (int i = 0; i < N; i++) { // 대입
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}

		sort(v.begin(), v.end()); // 정렬
		dfs(0, 0); // 0번 요소 더하지 않았을 경우 
		dfs(0, v[0]); // 0번 요소 더했을 경우 
		cout<<"#"<<i+1<<" " << ans << endl;
		// 초기화
		v.clear();
		ans = 0;
		N = 0;
		A = 0;
	} // t_c
	return 0;
}