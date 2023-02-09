#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int cnt;
	cin >> cnt;
	int num1, num2;
	int n;

	vector <int> ans;
	while (cnt--) {

		vector <int> v1;
		vector <int> v2;
		int pair=0; //정답
		cin >> num1;
		cin >> num2;
		for (int i = 0; i < num1; i++) {
			cin >> n;
			v1.push_back(n);
		}
		for (int i = 0; i < num2; i++) {
			cin >> n;
			v2.push_back(n);
		}
		sort(v2.begin(), v2.end());
		for (int i = 0; i < num1; i++) {
		pair+= lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin();
		}
		cout<<pair<< endl;
	}
}
