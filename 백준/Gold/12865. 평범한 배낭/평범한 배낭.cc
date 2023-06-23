#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int dp[101][100001] = { 0, };
int main(){
	int N, V; // N:물건, V:가치
	cin >> N >> V;

	for (int i = 0; i < N; i++) { //대입
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2; // 무게, 가치
		v.push_back(make_pair(tmp1, tmp2));
	}
	//sort(v.begin(), v.end());
	for (int i = 0; i <=N; i++) {
		for (int j = 0; j <=V; j++) {
			if (i == 0||j==0) dp[i][j] = 0; //초기화
			else {
				if (v[i-1].first > j) {
					dp[i][j] = dp[i - 1][j];
				}
				else {
					dp[i][j] = max(v[i-1].second + dp[i-1][j - v[i-1].first], dp[i - 1][j]);
				}
			}
		}
	}

	cout<<dp[N][V]<<endl;

}

