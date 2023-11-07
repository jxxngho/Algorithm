#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
string str[10] = {"A+","A0","A-","B+","B0","B-","C+","C0","C-","D0" };

int main() {
	int t_c = 0;
	cin >> t_c;
	for (int i = 0; i < t_c; i++) {
		vector <float> v1;
		int student_num, k;
		cin >> student_num >> k;
		for (int i = 0; i < student_num; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			v1.push_back(a * 0.35 + b * 0.45 + c * 0.2);
		}
		int cnt = 0;
		for (int i = 0; i < student_num; i++) {
			if (v1[i] > v1[k - 1]) cnt++;
		}
		cout << "#" << i + 1 << " " << str[cnt / (student_num / 10)] << endl;


	}
	return 0;
}