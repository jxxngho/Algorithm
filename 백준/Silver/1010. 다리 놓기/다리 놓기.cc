#include <bits/stdc++.h>
using namespace std;


int main(){
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int a, b;
		long long result = 1; // 결과값 
		cin >> a >> b;
		if (a == 1) { // 왼쪽 다리 하나일 경우
			cout << b << endl;
		}
		else if (a == b) { // 양쪽 다리 개수 같을 경우
			cout << 1 << endl;
		}
		else {

			int r = 1; // nCr 
			for (int i = b; i > b - a; i--) {
				result *= i;
				result /= r;
				r++;
			}
			cout << result << endl;
		}
	}
}

