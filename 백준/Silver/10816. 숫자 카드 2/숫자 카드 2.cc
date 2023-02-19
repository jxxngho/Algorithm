#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin >> num;
	vector <int> v1;
	vector <int> v2;
	int tmp;
	while (num--) {

		cin >> tmp;
		v1.push_back(tmp);
	}
	sort(v1.begin(), v1.end());
	cin >> num;
	while (num--) {
		cin >> tmp;
		v2.push_back(tmp);
	}
	for (int i = 0; i < v2.size(); i++) {
		cout << upper_bound(v1.begin(), v1.end(), v2[i]) - lower_bound(v1.begin(), v1.end(), v2[i] )<< " ";
	}
}
