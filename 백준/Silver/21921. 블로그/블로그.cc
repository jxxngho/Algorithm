#include <bits/stdc++.h>
using namespace std;
int arr[250001] = { 0, };
int main(void)
{
	int day,num;
	cin >> day >> num;
	for (int i = 0; i < day; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = tmp;
	}
	int compare = 0;
	int plag = 1;
	int max = 0;
	for (int i = 0; i < num; i++) {
		max += arr[i];
		compare += arr[i];
	}

	for (int i = num; i  <day; i++) {
		compare -= arr[i-num];
		compare += arr[i];
		if (max == compare) {
			plag++; // 기간
		}
		else if (max < compare) {
			plag = 1;
			max = compare;
		}
	}
	if (max == 0) { // 최대 방문자 수 0명
		cout << "SAD" << '\n';
	}
	else {
		cout << max << '\n';
		cout << plag << '\n';
	}

	return 0;
}