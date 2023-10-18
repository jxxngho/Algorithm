#include <bits/stdc++.h>
using namespace std;
int sum[100001] = { 0, };

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int cnt = 0; 
	int inp = 0;
	cin >> cnt >> inp;
	for (int i = 1; i <= cnt; i++) {
		int tmp;
		cin >> tmp;
		sum[i] = sum[i - 1] + tmp; // 누적합
	}
	for (int i = 0; i < inp; i++) {
		int one, two;
		cin >> one >> two;
		cout << sum[two] - sum[one - 1] << '\n';
	}
	return 0;
}

