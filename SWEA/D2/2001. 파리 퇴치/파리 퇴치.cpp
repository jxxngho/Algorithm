#include<iostream>

using namespace std;

int main(int argc, char** argv){
    int cnt = 0;
	cin >> cnt;

	for (int k = 0; k < cnt; k++) {
		int N, M;
		cin >> N >> M;

		int tmp = 0;
		int sum[16][16] = { 0, };
		 
		for (int i = 1; i <= N; i++) {  // 누적합 구하기
			for (int j = 1; j <= N; j++) {
				cin >> tmp;
				sum[i][j] = tmp + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
			}
		}


		int ans = 0;
		for (int i = M; i <= N; i++) {
			for (int j = M; j <= N; j++) { // M*M 최대합 구하기 
				int tmp2 = sum[i][j] - sum[i][j-M] - sum[i-M][j] + sum[i-M][j-M];
				if (ans < tmp2) ans = tmp2;

			}

		}
		cout <<"#"<<k+1<<" "<< ans << endl;
	}

	return 0;
}