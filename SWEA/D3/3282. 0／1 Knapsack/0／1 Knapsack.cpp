#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int dp[101][1001]{ 0, }; //dp
int v[1001]; // 부피
int c[1001]; // 가치
int main() {
	int test_case= 0;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int number, volume;
		cin >> number >> volume;
		for (int j = 1; j <=number; j++) {
			int tmp1,tmp2;
			cin >> tmp1 >> tmp2;
			v[j] = tmp1;
			c[j] = tmp2;
		}

		for (int k = 1; k <= number;k++) {
			for (int j = 1; j <= volume; j++) {
				if (v[k]<=j) { // j보다 무게가 작을 때
					dp[k][j] = max( c[k] + dp[k - 1][j - v[k]], dp[k - 1][j]); 
					// k번째 물건을 넣었을 경우와 넣지 않았을 때 경우 고려
				}
				else { // j보다 무게가 클 때는 그 전에 가장 큰 것으로
					dp[k][j] = dp[k - 1][j];
				}
			}
		}
		cout<<"#"<<i+1<<" " << dp[number][volume] << endl;
		memset(dp, 0, sizeof(dp));
		memset(v, 0, sizeof(v));
		memset(c, 0, sizeof(c));
	}


	return 0;
}