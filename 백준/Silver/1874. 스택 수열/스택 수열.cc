#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack <int> s;
	vector <char> v;
	int count;
	int c = 0;
	cin >> count;
	int i = 1;
	while (count--) {
		int num;
		cin >> num;
		if (s.empty()||s.top() != num) {
			while(i<=num) {
				s.push(i);
				v.push_back('+');
				i++;
			}
		}
		if (s.top() == num) {
			s.pop();
			v.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout <<v[i] << '\n';
	}
	return 0;
}
